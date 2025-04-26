#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int a[100];
	int max= -999;
	do{
	cout << "nhap so luong phan tu n: ";
	cin >> n;
	}
	while(n <= 0);
	cout << "nhap phan tu cua mang: ";
	for( int i = 0; i < n; i++){
		cin >> a[i];
	}
	for( int i = 0; i < n; i++){
		if(a[i]% 3 == 0){
			if(a[i] > max){
				max = a[i];
			}
		}
	}
	if(max == -999){
		cout << "khong co so nao chia het cho 3";
	} else {
		cout << "so lon nhat chia het cho 3 la: " << max;
	}
	return 0;
}
