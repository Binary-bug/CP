#include<iostream>
#include<bitset>


using namespace std;

int main(){
	char c;
	bitset<26> a;
	while(cin.get(c)) if(c > 96 && c < 123) a[c-97]=1;
	cout << a.count() << endl;
	return 0;
}
