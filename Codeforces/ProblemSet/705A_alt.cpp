#include<iostream>

using namespace std;

int main(){
	int i=0,n;
	for(cin >> n; i++ < n;cout << (i!=n? "that " : "it")) cout << (i %2 ? "I hate " : "I love ");
	return 0;
}
