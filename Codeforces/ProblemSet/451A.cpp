#include<iostream>

using namespace std;


int main(){
	int n,m,a,b;
	cin >> n >> m;
	a = min(n,m);
	b = max(n,m);
	(a%2)?(cout << "Akshat"):(cout << "Malvika");
	cout << endl;
	return 0;
}
