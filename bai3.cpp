#include <iostream>
#include <iomanip>
using namespace std;

struct SinhVien {
    string ten;
    float toan;
    float ly;
    float hoa;
    float diemTB; 
};


void nhapSinhVien(SinhVien &sv) {
    cin.ignore(); 
    cout << "Nhap ten sinh vien: ";
    getline(cin, sv.ten);
    cout << "Nhap diem Toan: ";
    cin >> sv.toan;
    cout << "Nhap diem Ly: ";
    cin >> sv.ly;
    cout << "Nhap diem Hoa: ";
    cin >> sv.hoa;

    sv.diemTB = (sv.toan + sv.ly + sv.hoa) / 3;
}


void inSinhVienGioi(SinhVien sv) {
    cout << left << setw(20) << sv.ten
         << setw(10) << fixed << setprecision(2) << sv.toan
         << setw(10) << sv.ly
         << setw(10) << sv.hoa
         << setw(10) << sv.diemTB << endl;
}

int main() {
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;

    SinhVien ds[n];

    for (int i = 0; i < n; i++) {
        cout << "\nNhap thong tin sinh vien thu " << i + 1 << ":\n";
        nhapSinhVien(ds[i]);
    }

    cout << "\nDanh sach sinh vien co diem trung binh >= 8:\n";
    cout << left << setw(20) << "Ten"
         << setw(10) << "Toan"
         << setw(10) << "Ly"
         << setw(10) << "Hoa"
         << setw(10) << "DiemTB" << endl;

    for (int i = 0; i < n; i++) {
        if (ds[i].diemTB >= 8.0) {
            inSinhVienGioi(ds[i]);
        }
    }

    return 0;
}

