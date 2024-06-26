#include <iostream>

using namespace std;

int main()
{
    int i,result=1;
    cin >> i;
    if(i>31)
        cout << "Value of more than 31" << endl;
    else
    {
        //位移運算元，每往左即乘2
        result = result << i;
        cout << result << endl;
    }

    return 0;
}