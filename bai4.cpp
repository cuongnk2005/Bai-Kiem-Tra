#include <iostream>
#include <set>
using namespace std;
//int checklap(int x, a[]){
//	for(int i = 0; i < n; i++)
//}
int main() {
    int n;
    int sumtest = 0;
    cout << "Nhap so luong phan tu: ";
    cin >> n;

    int a[n];
    int b[100];
    cout << "Nhap cac phan tu:\n";
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    set<int> distinctValues;
    for (int i = 0; i < n; ++i) {
        distinctValues.insert(a[i]);
    }

    cout << "Cac gia tri phan biet la:\n";
    for (int val : distinctValues) {
    	int sum = 0;
    	for(int i = 0; i < n ; i ++){
    		if(a[i] == val){
    			sum++;
			}
		}
		if(sum == 1){
			 cout << val << " ";
			 sumtest++;
		}
       
    }
    if(sumtest == 0){
    	cout << "khong co cac gia tri phan biet";
	}
   

    return 0;
}

