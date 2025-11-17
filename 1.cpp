#include <stdio.h>
#define MAX 100

int findMax(int *arr, int n);

int main() {
    int a[MAX];
    int n;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    // Nhap mang
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", (a + i));     // dùng con tr?
    }

    int max = findMax(a, n);
    printf("So lon nhat trong mang la: %d", max);

    return 0;
}

int findMax(int *arr, int n) {
    int max = *arr;              // = arr[0]

    for (int i = 1; i < n; i++) {
        if (*(arr + i) > max) {  // so sánh b?ng con tr?
            max = *(arr + i);
        }
    }

    return max;
}



