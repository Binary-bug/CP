#include<iostream>
#include<string>



using namespace std;


int main(){
	string s1;
	int i;
	cin >> s1;
	string s2 = "hello";
	size_t index = s1.find(s2[0]);
	for(i= 1 ; i < 5; ) {
		index = s1.find(s2[i],index+1);
		if(index != string::npos) i++;
		else break;
	}
	if(i == 5)  cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
