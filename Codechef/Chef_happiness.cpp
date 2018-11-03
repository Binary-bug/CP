#include <iostream>

using namespace std;

int main(){
	int T=0, N=0;
	cin >> T;
	map<int,vector<int> > integers;
	while(T--){
		int temp=0;
		cin >> N;
		for(int i=0; i != N; i++){
		       	cin >> temp;
			integers[temp].push_back(i+1);
		}
	
