#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double dist,dist2;
	cin>>dist;
	dist2=dist/(1-30*2.54*0.01);
	cout<<ceil(dist2)<<endl;
		
	return 0;
}