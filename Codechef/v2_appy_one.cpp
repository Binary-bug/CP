#include <iostream>
#include <vector>
#include <string>

using namespace std;


int maxlen(vector<int>& bdits,int index,int K){
	int count = 0;
	int result = 0;
	int k = 0,N=0;
	N = bdits.size();	
	for (int i =0; i < N; i++){
		k = (i + index) % N; 
		if(bdits[k] == 0) count = 0;
		else{
			count++;
			result = max(result,count); 
		}
	}
	if(count) result = max(result,count);
	result = min(result,K);
return result;	
}			

int main(){


	int N,K,Q,temp;
	string query;
	scanf("%d%d%d",&N,&Q,&K);
	int index = 0;
	vector<int> bdits;
	while(N--){ 
		scanf("%d",&temp);
		bdits.push_back(temp);
	}
	cin >> query;
	N=bdits.size();
	temp = maxlen(bdits,index,K);
	for(int i =0; i < Q ; ++i){
		if(query[i] == '!'){
		       	index = (N - 1 + index) % N;
			if(bdits[index]==1 && ( bdits[(index+1)%N]==1 || bdits[(index + N-1)%N] == 1))
				temp = maxlen(bdits,index,K);
		}
		else 	cout << temp << "\n";
	}	
	return 0;
}
	        	

