#include<iostream>

using namespace std;

int main(){
	int n ,k,a;
	cin >> n >> k;
	int x[6]={0};
	while(n--){
		cin >> a;
		x[5-a]++;
	}
	a = 0;
	for(int i = k; i < 6; i++){
		 a+= x[i];
	}
	cout << a / 3 << endl;
	return 0;
} 
