#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n) {
    if (n <= 2) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
	do{
	cout << "Nhap so nguyen n: ";
	cin >> n;
	}
	while(n > 30);
    cout << "Day Fibonacci tu F1 den F" << n << " la:\n";
    for (int i = 1; i <= n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}

