#include<iostream>
#include<unordered_set>

using namespace std;

int main(){
	unordered_set<char> gender;
	char c;
	while(cin >> c) gender.insert(c);
	if(!(gender.size() % 2))cout << "CHAT WITH HER!" << endl;
	else cout << "IGNORE HIM!" << endl;
	return 0;
}
