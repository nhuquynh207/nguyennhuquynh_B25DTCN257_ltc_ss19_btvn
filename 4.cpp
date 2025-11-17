#include <stdio.h>
#define MAX 100
int countValue(int *arr,int n,int x);
int main(){
	int arr[MAX];
    int n,x;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", arr + i);
    }
    printf("Nhap so muon dem:");
    scanf("%d",&x);
    int count=countValue(arr,n,x);
    printf("%d xuat hien %d lan",x,count);
    

}
int countValue(int *arr,int n,int x){
	int temp=0;
	for(int i=0;i<n;i++){
		if(x==*(arr+i)){
			temp++;
		}
	}
	return temp;
}

