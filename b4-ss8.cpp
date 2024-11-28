#include <stdio.h>

int main(){
	int n;
	printf("Nhap vao kich thuoc mang: ");
    scanf("%d", &n);
	int a[n][n];
	for (int i=0; i<n ;i++){
		for (int j=0; j<n; j++){
			printf("Nhap vao mang 2 chieu a[%d][%d]:" ,i,j);
			scanf("%d",&a[i][j]);
		}
	}
	int max; 
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if(max <a[i][j]){
			   max= a[i][j];
			}
		}
	}
	printf("Mang co phan tu lon nhat la: %d ",max);
	return 0;	
}
