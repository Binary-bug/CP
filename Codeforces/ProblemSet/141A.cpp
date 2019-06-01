#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	string s1;
	string s2;
	string s3;
	cin >> s1 >> s2 >> s3;
	s1 = s1 + s2;
	sort(s3.begin(),s3.end());
	if(s1.length() != s3.length())cout << "NO" << endl;
	else		sort(s1.begin(),s1.end()), cout << ((s1 == s3) ? "YES" : "NO") << endl;
	return 0;
}
