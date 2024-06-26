#include <iostream>

using namespace std;
int main(){
    int n,binary[7],temp = 1;
    cin >> n;
    for(int i=6;i>=0;i--){
        binary[i] = temp;
        temp<<=1;
    }
    if(n<0){
        cout << 1;
        n = 128+n;
        for(int i=0;i<7;i++){
            if(n>=binary[i]){
                n -= binary[i];
                cout << 1;
            }
            else{
                n -= binary[i];
                cout << 0;
            }
        }
        endl(cout);

    }
    else{
        cout << 0;
        for(int i=0;i<7;i++){
            if(n>=binary[i]){
                n -= binary[i];
                cout << 1;
            }
            else{
                cout << 0;
            }
        }
        endl(cout);
    }
}