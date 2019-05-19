#include<iostream>
#include<string>

using namespace std;

int main(){
	int n,x,y,c=1;
	cin >> n >> x;
	while(--n){
		cin >> y;
		c += ( x != y);
		x = y;
	}
	cout << c << endl;
	return 0;
}
