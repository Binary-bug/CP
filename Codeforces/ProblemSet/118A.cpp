#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<stdlib.h>

using namespace std;

bool vowel(const char c){
	if(c == 'A' || c == 'a' || c == 'o' || c == 'O'  ||  c == 'y' ||  c == 'Y' || c == 'e'|| c =='E' || c == 'u' || c =='U' || c == 'i' || c == 'I')
		return 1;
	return 0;
}



int main(){
	string text;
	cin >> text;
	typedef string::iterator iter;
	iter valid = remove_if(text.begin(),text.end(),vowel);
	for(iter i = text.begin();  i!=valid ; i++){
		if(*i < 91) cout << "." << (char)(*i +32);
		else cout << "." << *i;
	}
	cout<<endl;
	return 0;
}
