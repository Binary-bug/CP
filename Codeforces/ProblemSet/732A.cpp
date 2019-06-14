#include<iostream>



using namespace std;


int main(){
	int k,r;
	cin >> k >> r;
	int x = 1;
	while(x*k % 10 &&  (x*k - r) %10) x++;
	cout << x << endl;
	return 0;
}
