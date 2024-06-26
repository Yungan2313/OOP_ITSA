#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
int main(){
    double length;
    cin >> length;
    cout<<fixed<<setprecision(1)<<round(length*length*10)/10.0<<endl;


}