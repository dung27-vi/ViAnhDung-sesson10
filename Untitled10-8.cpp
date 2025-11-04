#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}
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
    std::cout << "Nhap so phan tu cua mang: ";
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    std::cout << "Nhap cac phan tu cua mang, cach nhau boi dau cach: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    
    std::cout << "Nhap cac phan tu can tim: ";
    int target;
    std::cin >> target;

    bubbleSort(arr);

    std::cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int index = binarySearch(arr, target);

    if (index != -1) {
        std::cout << "Chi so cua phan tu can tim: " << index << std::endl;
    } else {
        std::cout << "Khong tim thay phan tu trong mang." << std::endl;
    }

    return 0;
}
