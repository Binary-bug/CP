#include<iostream>


using namespace std;


int main(){
	int x,y,z,w,n;
	const char *a[5]={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
	cin >> n;
	x = 0;
	while(5*((1 << x)-1) < n) x++;
	y = (1 << (x-1));
	n = n - 5*(y-1);
	w = (n - 1) / y;
	cout << a[w] << endl;
	return 0;
}	
