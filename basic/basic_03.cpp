#include <iostream>

using namespace std;
int main(){
    float x,y,length;
    cin >> x >> y;
    length = x*x+y*y;
    if(length<10000){
        cout << "inside\n";
    }
    else{
        cout << "outside\n";
    }
}