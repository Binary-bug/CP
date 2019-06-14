#include<iostream>
#include<string>
#include<map>

using namespace std;


int main(){
	int n;
	string s;
	map<string,int> ber;
	cin >> n;
	while(n--){
		cin >> s;
		if(ber.find(s) == ber.end()) cout << "OK" << endl , ber[s]++;
		else{
			s = s + to_string(ber[s]++);
			cout << s << endl;
		}
	}
	return 0;
}

			
		
