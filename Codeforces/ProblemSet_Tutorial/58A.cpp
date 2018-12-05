#include<iostream>

using namespace std;

int main(){
	string s1;
	cin >> s1;
	string s2 = "hello";
	int i=0;
	for(string::const_iterator it = s1.begin(); it !=s1.end(); it++) if(*it == s2[i]) i++;
	cout << ((i==5) ? "YES" : "NO") << endl;
	return 0;
}
