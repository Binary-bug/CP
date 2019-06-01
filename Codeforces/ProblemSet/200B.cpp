#include<iostream>


using namespace std;


int main(){
	float res=0;
	int n,p,i=0;
	cin >> n;
	for(; cin >> p,i++ < n ; res += p);
	cout << res/n << endl;
	return 0;
}
