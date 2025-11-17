#include <stdio.h>

void inputArray(int *a, int *n){
    printf("Nhap so phan tu: ");
    scanf("%d", n);

    for(int i = 0; i < *n; i++){
        printf("a[%d] = ", i);
        scanf("%d", a + i);
    }
}

void inMang(int *a, int *n){
    printf("Cac phan tu trong mang: ");
    for(int i = 0; i < *n; i++){
        printf("%d ", *(a + i));
    }
    printf("\n");
}

int arrayLength(int *a, int *n){
    return *n;   // d? dài chính là n
}

int sum(int *a, int *n){
    int s = 0;
    for(int i = 0; i < *n; i++){
        s += *(a + i);
    }
    return s;
}

int findMax(int *a, int *n){
    int max = *a;
    for(int i = 1; i < *n; i++){
        if(*(a + i) > max)
            max = *(a + i);
    }
    return max;
}

int main(){
    int choose;
    int n = 0;
    int arr[100];

    do{
        printf("\n================Menu================\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Chon chuc nang: ");
        scanf("%d", &choose);

        switch(choose){

            case 1:
                inputArray(arr, &n);
                break;

            case 2:
                if (n == 0)
                    printf("Mang chua duoc nhap!\n");
                else
                    inMang(arr, &n);
                break;

            case 3:
                if (n == 0)
                    printf("Mang chua duoc nhap!\n");
                else
                    printf("Do dai mang = %d\n", arrayLength(arr, &n));
                break;

            case 4:
                if (n == 0)
                    printf("Mang chua duoc nhap!\n");
                else
                    printf("Tong cac phan tu = %d\n", sum(arr, &n));
                break;

            case 5:
                if (n == 0)
                    printf("Mang chua duoc nhap!\n");
                else
                    printf("Phan tu lon nhat = %d\n", findMax(arr, &n));
                break;

            case 6:
                printf("Thoat chuong trinh!\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
        }

    }while(choose != 6);

    return 0;
}


