#include<iostream>
using namespace std;

int main(){
	string oper;
	int count = 0,N=0;
	cin >> N;
	while(N--){
	cin >> oper;
	if(oper == "++X" || oper == "X++") count++;
	else count--;
	}
	cout << count << endl;
	return 0;
}
