#include <stdio.h>

int main() {
    int a;

    printf("Nhap vao so nguyen n: ");
    scanf("%d", &a);

    int arr[a][a];  

    printf("Nhap cac phan tu cho ma tran %dx%d:\n", a, a);
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Ma tran da nhap:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

