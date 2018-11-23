#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int count = 0,x=0,i=-1;
	for(; i < 25 && !x; i++,cin>>x);
	x = i % 5;
	i = i / 5;
	cout << abs(i-2) + abs(x-2) << endl;
	return 0;
}
	
