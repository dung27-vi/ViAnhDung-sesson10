#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void nhapMang(int a[], int *n);
void xuatMang(int a[], int n);
void themPhanTu(int a[], int *n, int x, int pos);
void xoaPhanTu(int a[], int *n, int pos);
void capNhatPhanTu(int a[], int n, int x, int pos);
int timKiemPhanTu(int a[], int n, int x);
void sapXepBubbleSort(int a[], int n);
void menu();
int main() {
    int a[100];
    int n = 0;
    int choice, x, pos;
    do {
        menu();
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Nhap phan tu can them: ");
                scanf("%d", &x);
                printf("Nhap vi tri can them: ");
                scanf("%d", &pos);
                themPhanTu(a, &n, x, pos);
                break;
            case 2:
                printf("Nhap vi tri can xoa: ");
                scanf("%d", &pos);
                xoaPhanTu(a, &n, pos);
                break;
            case 3:
                printf("Nhap vi tri can cap nhat: ");
                scanf("%d", &pos);
                printf("Nhap gia tri moi: ");
                scanf("%d", &x);
                capNhatPhanTu(a, n, x, pos);
                break;
            case 4:
                printf("Nhap phan tu can tim: ");
                scanf("%d", &x);
                pos = timKiemPhanTu(a, n, x);
                if (pos != -1) {
                    printf("Phan tu %d duoc tim thay tai vi tri %d\n", x, pos);
                } else {
                    printf("Khong tim thay phan tu %d\n", x);
                }
                break;
            case 5:
                xuatMang(a, n);
                break;
            case 6:
                sapXepBubbleSort(a, n);
                printf("Mang da duoc sap xep\n");
                xuatMang(a, n);
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 7);
    return 0;
}
void menu() {
    printf("\n---------- QUAN LY DANH SACH SO NGUYEN ----------\n");
    printf("1. Them phan tu vao vi tri bat ky\n");
    printf("2. Xoa phan tu o vi tri bat ky\n");
    printf("3. Cap nhat gia tri tai vi tri bat ky\n");
    printf("4. Tim kiem phan tu trong mang\n");
    printf("5. Hien thi mang\n");
    printf("6. Sap xep mang (Bubble Sort)\n");
    printf("7. Thoat chuong trinh\n");
    printf("--------------------------------------------------\n");
}

void themPhanTu(int a[], int *n, int x, int pos) {
    if (pos < 0 || pos > *n || *n >= 100) {
        printf("Vi tri khong hop le hoac mang da day.\n");
        return;
    }
    for (int i = *n; i > pos; i--) {
        a[i] = a[i - 1];
    }
    a[pos] = x;
    (*n)++;
}

void xoaPhanTu(int a[], int *n, int pos) {
    if (pos < 0 || pos >= *n) {
        printf("Vi tri khong hop le.\n");
        return;
    }
    for (int i = pos; i < *n - 1; i++) {
        a[i] = a[i + 1];
    }
    (*n)--;
}

void capNhatPhanTu(int a[], int n, int x, int pos) {
    if (pos < 0 || pos >= n) {
        printf("Vi tri khong hop le.\n");
        return;
    }
    a[pos] = x;
}

int timKiemPhanTu(int a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return i;
        }
    }
    return -1;
}

void xuatMang(int a[], int n) {
    if (n == 0) {
        printf("Mang rong.\n");
        return;
    }
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void sapXepBubbleSort(int a[], int n) {
    int i, j, temp;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = true;
            }
        }
        if (swapped == false) {
            break;
        }
    }
}
