#include<string>
#include<iostream>

using namespace std;


int main(){
	int n;
	cin >> n;
	string x;
	while(n--){
		cin >> x;
		int k = 0;
		if(( k = x.length())  > 10)
			cout << x[0] << k-2  << x[k-1] << endl;
		else
			cout << x << endl;
	}
	return 0;
}	
