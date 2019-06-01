#include<iostream>
#include<string>
#include<algorithm>


using namespace std;

int main(){
	string s1;
	string s2;
	string s3;
	int n,m;
	cin >> n >> m;
	s1.assign(m,'#');
	s2.assign(m,'.');
	s3.assign(m,'.');
	s2[m-1]=s3[0]='#';
	for(int i = 0; i++ < n ; ) cout << (( i % 2) ? s1 : (( i / 2 ) % 2 ? s2 : s3)) << endl;
	return 0;
}
