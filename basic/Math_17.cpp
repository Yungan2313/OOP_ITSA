#include <iostream>

using namespace std;
template <class T>
int gcd(T a, T b) {
    while (b != 0) {
        T temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
    int a,b;
    cin >> a >> b;
    cout << gcd(a,b) << endl; 
    
}