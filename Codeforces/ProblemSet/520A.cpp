#include<iostream>
#include<bitset>

using namespace std;

int main(){
	int n=0;
	char c;
	scanf("%d",&n);
	bitset<26> b;
	c = getchar();
	for(int i=0; i++ < n; b[c-97]=1) scanf("%c",&c), (c < 97)? (c += 32):0;
	cout << (b.count() == 26 ? "YES" : "NO")<< endl ;
	return 0;
}
