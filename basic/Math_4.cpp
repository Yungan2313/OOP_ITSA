#include <iostream>

using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b;
    cout << a << "+" << b << "=" << a+b << endl;
    cout << a << "*" << b << "=" << a*b << endl;
    cout << a << "-" << b << "=" << a-b << endl;
    c = a%b;
    if(c<0){
        cout << a << "/" << b << "=" << a/b-1 << "..." << c+b << endl;
    }
    else{
        cout << a << "/" << b << "=" << a/b << "..." << c << endl;
    }



}