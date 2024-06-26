#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    float m,sum;
    cin >> m;
    if(m<=800){
        sum = m*0.9;
    }
    else if(m>800 && m<1500){
        sum = m*0.9*0.9;
    }
    else{
        sum = m*0.9*0.79;
    }
    cout<<fixed<<setprecision(1)<<sum<<endl;
}