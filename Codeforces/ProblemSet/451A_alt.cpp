#include<iostream>


using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	((n>m?m:n)%2) ? (cout << "Akshat"):(cout << "Malvika");
	cout << endl;
	return 0;
}
