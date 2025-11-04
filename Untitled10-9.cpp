#include <iostream>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> prices(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> prices[i];
    }
    int id;
    std::cin >> id;
    if (id >= 0 && id < n) {
        std::cout << "Gia cua san pham voi ma ID " << id << ": " << prices[id] << std::endl;
    } else {
        std::cout << "Ma ID khong hop le." << std::endl;
    }
    std::cout << "Danh sach gia san pham sau khi sap xep: ";
    for (int i = 0; i < n; ++i) {
        std::cout << prices[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
