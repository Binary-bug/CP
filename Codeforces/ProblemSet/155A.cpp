#include<iostream>

using namespace std;


int main(){
	int n,x,i,j=0;
	cin >> n;
	cin >> n;
	x = i = n;
	for(;cin >> n;){
		(n > x && ++j)? (x = n):0;
		(n < i && ++j)? (i = n):0;
	}
	cout << j << endl;
	return 0;
}
		
		
		
