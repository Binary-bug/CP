#include<iostream>
#include<string>

using namespace std;


int main(){
	string query;
	string one="1111111";
	string zero="0000000";
	size_t found1,found2;
	cin >> query;
	found1 = query.find(one);
	found2 = query.find(zero);
	if(found1 != string::npos || found2 != string::npos) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
