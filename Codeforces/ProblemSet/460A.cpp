#include<iostream>

using namespace std;

int main(){
	int n,m,x,y;
	cin >> n >> m;
	x = (n-1)*m;
	y = x / (m - 1);
	cout << y + 1 << endl;
	return 0;
}
