#include <bits/stdc++.h>
using namespace std;


bool checknt(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    int sum = 0;
    cout << "Nhap so nguyen n: ";
    cin >> n;

    if (n <= 2) {
        cout << "Khong co so nguyen to nho hon " << n;
        return 0;
    }

    cout << "Cac so nguyen to nho hon " << n << " la: ";
    for (int i = 2; i < n; i++) {
        if (checknt(i)) {
            sum++;
            cout << i << " ";
        }
    }

    if (sum == 0) {
        cout << "\nKhong co so nguyen to nao";
    }

    return 0;
}

