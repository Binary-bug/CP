#include<iostream>
#include<set>

using namespace std;

int main(){
	int n;
	set< int > a;
	while(cin >> n) a.insert(n);
	cout << 4 - a.size() << endl;
	return 0;
}
