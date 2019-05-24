#include<iostream>

using namespace std;

int main(){
	int n,h,x,y;
	cin >> n >> h;
	y = n;
	while(cin >> x) if(x <= h) y--;
	cout << y + n << endl;
	return 0;
}
