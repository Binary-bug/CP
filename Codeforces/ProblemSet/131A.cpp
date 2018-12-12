#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	string rest;
	cin >> rest;
	int i = 1;
	while(i!=rest.size() && rest[i] < 97 ) i++;
	if(i == rest.size()){ 
		transform(rest.begin()+1,rest.end(),rest.begin()+1, ::tolower);
		(rest[0] > 96) ? (rest[0] -=32) : (rest[0] += 32);
	}
	cout << rest;  
	return 0;
}
