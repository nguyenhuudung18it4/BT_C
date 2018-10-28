#include<stdio.h>
#include<conio.h>

void Nhapmang(int arr[100], int n){
	for(int i=0;i<n;i++){
	printf("arr[%d]=",i); scanf("%d",&arr[i]);
    }
}

void inmang(int arr[100],int n){
	for (int i=0; i<n; i++){
		printf ("arr[%d]=%d",i,arr[i]);
    }
}

int giaithua(int n){
	int gt=1;
	for(int i=1; i<=n; i++) gt=gt*i;
	return gt;
}

int tonggiaithua(int arr[100], int n){
	
	int tong=0;
	for(int i=0; i<n; i++)
	tong=tong+giaithua(arr[i]);
	return tong;
}
int main(){
	int arr[100];
	int n;
	printf("nhap n"); scanf("%d",&n);
	Nhapmang(arr,n);
	inmang(arr,n);
	printf("tong cac giai thua la %d",tonggiaithua(arr,n));
}
