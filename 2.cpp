#include <stdio.h>
#define MAX 100

void countEvenOdd(int *arr, int n, int *even, int *odd);

int main() {
    int arr[MAX];
    int n;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", arr + i);
    }

    int even = 0, odd = 0;

    countEvenOdd(arr, n, &even, &odd);

    printf("Co %d so chan\n", even);
    printf("Co %d so le\n", odd);

    return 0;
}

void countEvenOdd(int *arr, int n, int *even, int *odd) {
    *even = 0;
    *odd = 0;

    for (int i = 0; i < n; i++) {
        if (*(arr + i) % 2 == 0)
            (*even)++;
        else
            (*odd)++;
    }
}

