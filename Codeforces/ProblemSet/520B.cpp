#include<iostream>


using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	if(n > m) cout << n-m << endl;
	else{
		int i = 0;
		int x = (m % 2) ? (m+1)/2 : m/2;
		while(n < x){
			n*=2;
			i++;
		}
		cout << 1 + n + x -m + i << endl;
	}
	return 0;
}	
