#include <iostream>

using namespace std;
int main(){
    float up,bottom,height;
    cin >> up >> bottom >> height;
    cout.precision(1);
    cout << fixed << "Trapezoid area:" <<(up+bottom)*height/2 << endl;



}