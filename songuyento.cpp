#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Nhap n = ";
    cin >> n;
    for(int k = 1; k <=n; k++) {
        if(k < 2){
            cout << k << " khong phai so nguyen to\n";
        }
        int count = 0;
        for(int i = 2; i <= sqrt(k); i++){
            if(k % i == 0){
                count++;
            }
        }
        if(count == 0){
            cout << k << " la so nguyen to\n";
        }else{
            cout << k << " khong phai so nguyen to\n";
        }
    }
    return 0;
}
