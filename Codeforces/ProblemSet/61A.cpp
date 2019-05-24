#include<iostream>
#include<bitset>
#include<string>

using namespace std;


int main(){
	string binary1,binary2;
	cin >> binary1 >> binary2;
	bitset<1000> b1 = bitset <1000>(binary1);
	bitset<1000> b2 = bitset <1000>(binary2);
	bitset<1000> b3 = (b1 ^ b2);
	string binary3 = b3.to_string();
	cout << binary3.substr(1000-binary1.length()) << endl;
	return 0;
}
