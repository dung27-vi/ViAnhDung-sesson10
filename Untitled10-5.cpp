#include <iostream>

int main() {
    int n = 6;
    int arr[] = {1, 2, 3, 4, 2, 2};
    int value = 2;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            count++;
        }
    }

    if (count > 0) {
        std::cout << "So lan xuat hien cua " << value << " la: " << count << std::endl;
    } else {
        std::cout << "Khong tim thay " << value << " trong mang." << std::endl;
    }

    return 0;
}
