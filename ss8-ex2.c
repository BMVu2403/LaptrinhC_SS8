#include <stdio.h>

int main() {
    int arr[] = {2, 4, 6, 8, 9};
    int n, i;

    printf("Nhap phan tu can kiem tra: ");
    scanf("%d", &n);

    for (i = 0; i < 5; i++) {
        if (arr[i] == n) {
            printf("Vi tri phan tu trong mang la %d\n", i);
            return 0;
        }
    }

    printf("Phan tu khong ton tai trong mang.\n");

    return 0;
}

