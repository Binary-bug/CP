#include <iostream>
#include <map>
#include <vector>
#include <set>

using namespace std;

int main(){
	int T=0, N=0;
	cin >> T;
	vector<int> sequence;
	map<int,vector<int> > integers;
	set<int> s;
	while(T--){
		int temp=0;
		cin >> N;
		for(int i=0; i != N; i++){
			cin >> temp;
			sequence.push_back(temp);
		}
		for(int i=0; i!=N; i++){
			int x = sequence[i];
			if(s.find(x) == s.end()){
				integers[sequence[x-1]].push_back(i+1);
				s.insert(x);
			}
		}
		temp = 0;
		for(map<int,vector<int> >::const_iterator it = integers.begin(); it!=integers.end(); ++it){
			if(it->second.size() > 1){
				cout<<"Truly Happy"<<endl;
				temp=1;
				break;
			}
		}
		if(!temp) cout << "Poor Chef" << endl;
		sequence.clear();
		s.clear();
		integers.clear();
	}
	return 0;
}




	
