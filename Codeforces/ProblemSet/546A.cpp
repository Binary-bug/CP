#include<iostream>


using namespace std;;


int main(){
	int n,k,w,x;
	cin >> k >> n >> w;
	cout << (((x = (w*(w+1)*k)/2 - n) > 0)? x : 0) << endl;
	return 0;
} 
