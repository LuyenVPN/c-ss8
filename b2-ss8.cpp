#include<stdio.h>

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int x;
    printf("Nhap phan tu can kiem tra: ");
    scanf("%d", &x);  

    for (int i = 0; i < 5; i++) {
        if (arr[i] == x) {
            printf("Vi tri phan tu trong mang la: %d\n", i+1);
            return 0;
        }
    }

    printf("Phan tu khong ton tai trong mang.\n");
    return 0;
}

