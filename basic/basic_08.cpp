#include <iostream>

using namespace std;
int main(){
    int n,test = 2,check = 0;
    cin >> n;
    while(n!=test+1){
        if(n%test == 0){
            cout << "NO" << endl;
            check = 1;
            break;
        }
        test++;
    }
    if(check==0){
        cout << "YES" << endl;
    }
}