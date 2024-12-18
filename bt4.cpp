#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    if (n <= 0) return 1;

    int mang[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu mang[%d]: ", i);
        scanf("%d", &mang[i]);
    }

    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");
    
    return 0;
}
