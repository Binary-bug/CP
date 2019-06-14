#include<iostream>
#include<string>

using namespace std;


int main(){
	int n,p=0;
	cin >> n;
	while( cin >> n) p+=n;
	puts(p?"HARD":"EASY");
	return 0;
}
