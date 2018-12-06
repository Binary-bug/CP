#include<iostream>
using namespace std;
int main(){
	char c;
	while(cin >> c){
		if(c == 57 || c == 72 || c == 81){
		 cout << "YES" << endl;
		 return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
		
