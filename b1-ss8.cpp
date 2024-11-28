#include<stdio.h>

int main(){
	int n;
	printf("Nhap do dai mang : ");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		printf("Nhap phan tu thu %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	for(int i = n - 1; i >= 0; i--){
		printf("%d\t",arr[i]);
	}
	return 0;
}
