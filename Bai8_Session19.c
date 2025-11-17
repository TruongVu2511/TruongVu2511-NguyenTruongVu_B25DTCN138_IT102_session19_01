#include <stdio.h>

#define MAX 100

void inputScores(float *scores, int *count) {
    printf("Nhap so luong sinh vien: ");
    scanf("%d", count);
    for (int i = 0; i < *count; i++) {
        printf("Diem sinh vien [%d]: ", i + 1);
        scanf("%f", (scores + i));
    }
}

void displayScores(float *scores, int count) {
    printf("Danh sach diem thi:\n");
    for (int i = 0; i < count; i++) {
        printf("Sinh vien [%d]: %.2f\n", i + 1, *(scores + i));
    }
}

float calculateAverage(float *scores, int count) {
    float total = 0;
    for (int i = 0; i < count; i++) {
        total += *(scores + i);
    }
    return total / count;
}

void showHighestScore(float *scores, int count) {
    float max = *scores;
    int index = 0;
    for (int i = 1; i < count; i++) {
        if (*(scores + i) > max) {
            max = *(scores + i);
            index = i;
        }
    }
    printf("Sinh vien co diem cao nhat la [%d]: %.2f\n", index + 1, max);
}

void showBelowAverage(float *scores, int count, float average) {
    printf("Cac sinh vien co diem duoi trung binh:\n");
    for (int i = 0; i < count; i++) {
        if (*(scores + i) < average) {
            printf("Sinh vien [%d]: %.2f\n", i + 1, *(scores + i));
        }
    }
}

void sortScoresDescending(float *scores, int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (*(scores + i) < *(scores + j)) {
                float temp = *(scores + i);
                *(scores + i) = *(scores + j);
                *(scores + j) = temp;
            }
        }
    }
    printf("Da sap xep diem giam dan.\n");
}

int main() {
    float scores[MAX];
    int count = 0, choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap diem thi\n");
        printf("2. Hien thi danh sach diem\n");
        printf("3. Tinh diem trung binh\n");
        printf("4. Hien thi diem cao nhat\n");
        printf("5. Hien thi diem duoi trung binh\n");
        printf("6. Sap xep diem giam dan\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                inputScores(scores, &count);
                break;
            case 2:
                displayScores(scores, count);
                break;
            case 3:
                printf("Diem trung binh cua lop: %.2f\n", calculateAverage(scores, count));
                break;
            case 4:
                showHighestScore(scores, count);
                break;
            case 5:
                showBelowAverage(scores, count, calculateAverage(scores, count));
                break;
            case 6:
                sortScoresDescending(scores, count);
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le.\n");
        }
    } while (choice != 7);

    return 0;
}

