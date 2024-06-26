#include <iostream>

using namespace std;
int main(){
    int miles;
    double kilometers;
    cin >> miles;
    kilometers = miles*1.6;
    cout.precision(1);
    cout<<fixed<<kilometers<<endl;
}