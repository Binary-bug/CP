#include<iostream>

using namespace std;

int repeat(int x){
	int occurances = 0;
	while(x > 0){
	if(occurances & 1 << (x % 10)) return 1;
	occurances |= 1 << (x % 10);
	x = x/10;
	}
	return 0;
}

int main(){
	int y;
	cin >> y;
	while(repeat(++y));
	cout << y  << endl;
	return 0;
}
		
