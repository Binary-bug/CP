#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
	long int T,i;
	unsigned long long int a,b,N,M;
	vector<unsigned long long int> q;
	bool turn;
	cin >> T;
	while(T--){
		cin >> a >> b;
		turn = true;
		N = max(a,b); 
		M = min(a,b);
		while(N && M){
			if(M !=1)q.push_back(N/M);
			else q.push_back(1);
			a = N % M;
			N = M;
			M = a;
		}
		i=0;
		while(q[i]== 1 && i < q.size()){
			if(q[i] != 1) break;
			 turn = !turn;
			 i++;
		}
		if(i == q.size()){
			if((i % 2) != 0) turn = true;
			else turn = false;
		}  
		(turn)?(cout << "Ari" << endl):(cout << "Rich" << endl);
	q.clear();
	}
	return 0;
}

			
