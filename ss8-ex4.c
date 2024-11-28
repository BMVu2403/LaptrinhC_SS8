#include <stdio.h>

int main() {
    int hang = 3, cot = 3;
    int arr[3][3] = {
        {1, 5, 7},
        {9, 11, 13},
        {15, 17, 19}
    };

    int max = arr[0][0];  

    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    printf("Phan tu lon nhat trong mang la: %d\n", max);

    return 0;
}

