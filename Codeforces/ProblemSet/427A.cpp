#include<iostream>


using namespace std;

int main(){
	int n,x;
	int count=0,hire=0;
	cin >> n;
	for(int i=0; i < n; i++) {
		cin >> x;
		(x != -1) ? hire += x : (hire ? hire-- : count++);
	}
	cout << count << endl;
	return 0;
}
