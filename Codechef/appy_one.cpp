#include <iostream>
#include <vector>

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
	char c=' ';
	cin >> N >> Q >> K;
	int index = 0;
	vector<int> bdits;
	while(N--){ 
		cin >> temp;
		bdits.push_back(temp);
	}
	N=bdits.size();
	while(Q--){
		cin >> c;
		temp = 0;
		if(c == '!') index = (index + 1) % N;
		else {
			temp = maxlen(bdits,index,K);
			cout << temp << endl;
		}	
	}
	return 0;
}
	        	

