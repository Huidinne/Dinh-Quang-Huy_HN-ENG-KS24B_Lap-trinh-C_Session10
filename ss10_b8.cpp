#include <stdio.h>
int main(){
    int n, m;
    printf("Nhap so dong: ");
    scanf("%d", &n);
    printf("Nhap so cot: ");
    scanf("%d", &m);
    int arr[n][m];
    printf("Nhap cac phan tu cho mang 2 chieu:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Mang truoc khi sap xep:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n ; j++) {
            for (int k = 0; k < n - j - 1; k++) {
                if (arr[k][i] > arr[k + 1][i]) {
                    int temp = arr[k][i];
                    arr[k][i] = arr[k + 1][i];
                    arr[k + 1][i] = temp;
                }
            }
        }
    }
    printf("Mang sau khi sap xep:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

