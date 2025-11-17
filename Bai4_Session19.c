#include <stdio.h>

int countValue(int *arr, int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == x) {
            count++;
        }
    }
    return count;
}
int main() {
    int n, x;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Phan tu [%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);
    int result = countValue(arr, n, x);
    printf("Gia tri %d xuat hien %d lan trong mang.\n", x, result);

    return 0;
}


