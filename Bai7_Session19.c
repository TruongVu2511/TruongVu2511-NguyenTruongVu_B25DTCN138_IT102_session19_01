#include <stdio.h>
#define MAX 100

void inputArray(int array[], int *size) {
    printf("Nhap so phan tu (toi da %d): ", MAX);
    scanf("%d", size);
    for (int i = 0; i < *size; i++) {
        printf("Phan tu [%d]: ", i);
        scanf("%d", &array[i]);
    }
}
void displayArray(int array[], int size) {
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
int calculateSum(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;
}
int findMax(int array[], int size) {
    int max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}
int main() {
    int array[MAX];
    int size = 0, choice;
    do {
        printf("Menu:\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                inputArray(array, &size);
                break;
            case 2:
                displayArray(array, size);
                break;
            case 3:
                printf("Do dai mang: %d\n", size);
                break;
            case 4:
                printf("Tong cac phan tu: %d\n", calculateSum(array, size));
                break;
            case 5:
                printf("Phan tu lon nhat: %d\n", findMax(array, size));
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le.\n");
        }
    } while (choice != 6);

    return 0;
}

