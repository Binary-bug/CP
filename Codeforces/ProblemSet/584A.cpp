#include<iostream>


using namespace std;


int main(){
	int n,t;
	cin >> n >> t;
	if( n == 1 && t == 10){
		cout << -1 << endl;
		return 0;
	}
	if(t == 10) n--;
	n--;
	cout << t;
	while(n--) cout << 0;
	return 0;
}	
