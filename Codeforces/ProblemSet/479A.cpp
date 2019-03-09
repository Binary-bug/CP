#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int a,b,c;
	int x=0,y=0,z;
	cin >> a >> b >> c;
	if(a==1 || b==1) x = a+b;
	else x = a*b;
	if(b==1 || c==1) y = b+c;
	else y = b*c;
	z = max(max(max(x*c,x+c),a+y),a*y);
	cout << z;
	return 0;
} 
