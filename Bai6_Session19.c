#include <stdio.h>

void copyArray(int *src, int *dest, int n) {
    for (int i = 0; i < n; i++) {
        *(dest + i) = *(src + i);
    }
}
int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int A[n], B[n];
    printf("Nhap mang A:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu A[%d]: ", i);
        scanf("%d", &A[i]);
    }
    copyArray(A, B, n);
    printf("Mang B sau khi sao chep:\n");
    for (int i = 0; i < n; i++) {
        printf("B[%d] = %d\n", i, B[i]);
    }

    return 0;
}

