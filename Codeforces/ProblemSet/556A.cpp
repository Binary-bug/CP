#include<iostream>
#include<stack>

using namespace std;

int main(){
	int n;
	cin >> n;
	char c;
	stack<char> s;
	while(n--){
		cin >> c;
		if(!s.empty()){
			if(s.top() != c) s.pop();
			else s.push(c);
		}
		else s.push(c);
	}
	cout << s.size() << endl;
	return 0;
}
