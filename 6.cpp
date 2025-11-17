#include <stdio.h>
#define MAX 100
#include <string.h>
int copyArray(int *src,int *dest,int n);
int main(){
	int n,a[MAX],b[MAX];
	printf("Nhap so phan tu cua mang:");
	scanf("%d",&n);
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
    printf("Mang b sau khi sao chep la:\n");
    copyArray(a,b,n);
    for(int i=0;i<n;i++){
    	printf("%3d",*(b+i));
	}
    
    
}
int copyArray(int *scr,int *dest,int n){
	for(int i=0;i<n;i++){
		*(dest+i)=*(scr+i);
	}
	return 1;
}

