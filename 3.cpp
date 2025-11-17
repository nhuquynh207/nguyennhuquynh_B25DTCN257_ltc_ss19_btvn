#include <stdio.h>
#define MAX 100

int average(int *arr, int n);

int main() {
    int arr[MAX];
    int n;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", arr + i);
    }

    float Average = average(arr, n);

    printf("Trung binh cua mang la: %.2f", Average);
    return 0;
}

int average(int *arr, int n) {
    int sum = 0;
    int *pSum = &sum;      // con tr? tr? d?n bi?n sum

    for (int i = 0; i < n; i++) {
        *pSum += *(arr + i);
    }

    return *pSum / n;
}

