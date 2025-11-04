#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int target;
    std::cout << "Nhap so can tim: ";
    std::cin >> target;

    int n;
    std::cout << "Nhap so luong phan tu cua mang: ";
    std::cin >> n;

    std::vector<int> arr(n);
    std::cout << "Nhap cac phan tu cua mang de sap xep: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int index = binarySearch(arr, target);
    if (index != -1) {
        std::cout << "Chu so cua phan tu la " << index << std::endl;
    } else {
        std::cout << "Khong tim thay" << std::endl;
    }

    return 0;
}
