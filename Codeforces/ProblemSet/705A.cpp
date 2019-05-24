#include<iostream>

using namespace std;

void feelings(int n,bool x){
	if(n == 1) (x)? (cout << "I hate it"):(cout << "I love it");
	else (x)?(cout << "I hate that ") : (cout << "I love that "),feelings(n-1,!x);
}

int main(){
	int n;
	cin >> n;
	feelings(n,true);
	return 0;
}
