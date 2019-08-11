#include<iostream>

using namespace std;

int main(){
	int n;
	int x;
	int count = 0;
	cin >> n >>  x;
	for(int i =1; i <= n; i++){
		for(int j = i; j <= n; j++){
			if(i*j == x){
				count += (i == j)? 1:2;
			}
		}
	}
	cout << count << endl;
	return 0;
}
