#include<iostream>


using namespace std;


int main(){
	int n ,x;
	cin >> x;
	n = 0;
	for(int i= 31; i >=0; i--) if(x & 1 << i) n++;	
	cout << n << endl;
	return 0;
}
