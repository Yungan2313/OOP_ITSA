#include <iostream>

using namespace std;
int main(){
    int a1,a2,a3;
    char c;
    int coin;
    int charge[3];
    for(int i=0;i<3;i++){
        charge[i] = 0;
    }
    cin >> coin >> c >> a1 >> c >> a2 >> c >> a3;
    if(coin<a1*15+a2*20+a3*30){
        cout << "0" << endl;
    }
    else{
        coin-=a1*15+a2*20+a3*30;
        while(coin != 0){
            if(coin>=50){
                coin-=50;
                charge[2]++;
                continue;
            }
            else if(coin >= 5){
                coin-=5;
                charge[1]++;
                continue;
            }
            else{
                coin-=1;
                charge[0]++;
                continue;
            }
        }
        cout << charge[0] << "," << charge[1] << "," << charge[2] << endl;
    }
}