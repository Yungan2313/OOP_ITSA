#include <iostream>

using namespace std;
int main(){
    int second;
    cin >> second;
    cout << second/86400 << " days" << endl;
    second %= 86400;
    cout << second/3600 << " hours" << endl;
    second %= 3600;
    cout << second/60 << " minutes" << endl;
    second %= 60;
    cout << second << " seconds" << endl;
}