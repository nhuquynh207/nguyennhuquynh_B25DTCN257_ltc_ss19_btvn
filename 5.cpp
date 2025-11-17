#include <stdio.h>
#define MAX 100

int compareArrays(int *a, int *b, int n);

int main() {
    int a[MAX], b[MAX];
    int n;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    // Nhap mang A
    printf("Nhap mang A:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", a + i);
    }

    // Nhap mang B
    printf("Nhap mang B:\n");
    for (int i = 0; i < n; i++) {
        printf("b[%d] = ", i);
        scanf("%d", b + i);
    }

    // So sanh
    if (compareArrays(a, b, n) == 1)
        printf("Hai mang giong nhau\n");
    else
        printf("Hai mang khac nhau\n");

    return 0;
}

int compareArrays(int *a, int *b, int n) {
    for (int i = 0; i < n; i++) {
        if (*(a + i) != *(b + i)) {
            return 0;  
        }
    }
    return 1; 
}

