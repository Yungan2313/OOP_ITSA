#include <iostream>

using namespace std;
int main(){
    int a[2],b[2];
    int n;
    char oper;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> oper;
        cin >> a[0] >> a[1] >> b[0] >> b[1];
        switch (oper)
        {
            case '-':
                cout << a[0]-b[0] << a[1]-b[1] << endl;
                break;
            case '+':
                cout << a[0]+b[0] << a[1]+b[1] << endl;
                break;
            case '*':
                cout << a[0]*b[0]-a[1]*b[1] << a[1]*b[0] + a[1]*b[0] << endl;
                break;
            default:
                break;
        }   
    }



}