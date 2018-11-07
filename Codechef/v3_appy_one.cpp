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
	vector<int> rotate_array;
	while(N--){ 
		scanf("%d",&temp);
		bdits.push_back(temp);
	}
	cin >> query;
	N=bdits.size();
	temp = maxlen(bdits,index,K);
	rotate_array.push_back(temp);
	for(int i =1; i < N; ++i){
		if(bdits[i-1] ==1 && ((bdits[i]!=bdits[(N-2+i)%N]) || (bdits[i]==1 && bdits[(N-2+i)%N]==1))) temp = maxlen(bdits,i,K);
		rotate_array.push_back(temp);
	}
	index=0;	
	for(int i =0; i < Q ;i++){
		if(query[i] == '!') index = (index + N - 1) % N;
		else 	cout << rotate_array[index] << "\n";
	}	
	return 0;
}
	        	

