#include<iostream>
#include<string>

using namespace std;


int main(){
	string s;
	size_t found;
	cin >> s;
	while((found = s.find("WUB")) != string::npos){
		s.erase(found,3);
		if(found && found != s.size()-3) s.insert(found," ");
		
	}
	cout << s << endl;
	return 0;
}
			
