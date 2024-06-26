#include <iostream>

using namespace std;
int main(){
    int n;
    int charge[3] = {10,5,1};
    int sum[3] = {0,0,0};
    cin >> n;
    for(int i = 0;i<3;i++){
        if(n>=charge[i]){
            n-=charge[i];
            sum[i]++;
            i-=1;
        }
    }
    cout << "NT10=" << sum[0] << endl;
    cout << "NT5=" << sum[1] << endl;
    cout << "NT1=" << sum[2] << endl;
}