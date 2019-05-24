#include<iostream>

using namespace std;


int main(){
	int n,x,a,b,c,d;
	a=b=c=d=0;
	bool parity;
	cin >> n;
	for(int i=0;i < n;i++){
		cin >> x;
		(x%2)?(a++,c=i):(b++,d=i);
	}
	(a == 1)?(cout << c+1):(cout << d+1);
	cout << endl;
	return 0;
}
