#include<iostream>

using namespace std;



int burnt(int a, int b){
	int x = 0;
	if(a < b) return 0;
	else return a/b + burnt(a/b + (a % b),b);
}
	

int main(){
	int a,b;
	cin >> a >> b;
	int count = a;
	count += burnt(a,b);
	cout << count << endl;
	return 0;
}
