#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool space(char c){
	return ::isspace(c);
}

bool not_space(char c){
	return ! ::isspace(c);
}

vector<string> split(string& str){
	typedef string::iterator iter;
	vector<string> ret;

	iter i = str.begin();
	while(i!=str.end()){

		//ignore leading blanks
		i = find_if(i,str.end(),not_space);

		//find end of next word
		iter j = find_if(i,str.end(), ::isspace);

		// copy the characters in [i,j)
		if(i!=str.end())
			ret.push_back(string(i,j));
		i = j;
	}
	return ret;
}

int main(){
	string s;
	bool found;
	int T,pos;
	cin >> T;
	cin.ignore();
	vector<string> v;
	while(T--){
	       found = false;
	       getline(cin,s);
	       v = split(s);
	       for(vector<string>::size_type i=0; i!=v.size(); i++) if(v[i] == "not"){ cout << "Real Fancy" << endl; found = true; break;}
	       if(!found) std::cout << "regularly fancy" << std::endl;
	}
	return 0;
}
