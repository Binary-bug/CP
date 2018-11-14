#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;


int maxlen(vector<int>& bdits,int index,stack<int> &s){
	int prev=0,k=0,N=0,count=0,result=0;
	N = bdits.size();	
	for (int i =0; i < N; i++){
		k = (i + index )%N;
		if(bdits[k]==1 && prev==0){
			count++;
			s.push(k);
			prev = 1;
		}else if(bdits[k]==1 && prev==1) 
			count++;
		else if(bdits[k]==0 && prev==1){
			if(count >= result){
				s.push((N - 1 + k) % N);
				result = count;
			}
			else s.pop();
			prev = 0;
			count = 0;
		}else ;			
	}
	if(count && count >= result){
		 result = count;
		 s.push(k);
	}
	else s.pop();
return result;	
}			

int main(){
	int N,K,Q,temp;
	string query;
	scanf("%d%d%d",&N,&Q,&K);
	int index = 0;
	vector<int> bdits;
	stack<int> s;
	vector<int> rotate_array;
	int start,end;
	while(N--){ 
		scanf("%d",&temp);
		bdits.push_back(temp);
	}
	cin >> query;
	N=bdits.size();
	temp = maxlen(bdits,index,s);
	rotate_array.push_back(temp);
	for(int i =1; i < N; ++i){
		if(bdits[i-1] ==1 && ((bdits[i]!=bdits[(N-2+i)%N]) || (bdits[i]==1 && bdits[(N-2+i)%N]==1))){
				end = s.top();
				s.pop();
				start = s.top();
				s.pop();
				if(bdits[i-1] == 1 && bdits[i] == 1 && bdits[(N-2+i)%N]==0){
					if(start == i-1){
						rotate_array.push_back(--temp);
						s.push(i);
						s.push(end);
					}
					else rotate_array.push_back(temp);
				}
				else if(bdits[i-1] == 1 && bdits[i] == 0 && bdits[(N-2+i)%N]==1){
				        if(end ==((N-2+i)%N)){
						 rotate_array.push_back(temp++);
						s.push(start);
						s.push(i-1);
					}
					else rotate_array.push_back(temp);
				}
				else if(bdits[i-1] == 1 && bdits [i] == 1 && bdits[(N-2+i)%N] == 1){
					if(start == i-1 && end != (N-2+i)%N){
						rotate_array.push_back(--temp);
						s.push(i);			
						s.push(end);
					}
					else if(start != i-1 && end == (N-2+i)%N){
						rotate_array.push_back(temp++);
						s.push(start);
						s.push(i-1);
					}
					else if(start == i-1 && end == (N-2+i)%N){
						rotate_array.push_back(temp);
						s.push((start + 1)%N);
						s.push((end + 1) %N);
					}else rotate_array.push_back(temp);
			    }
	}else{
		rotate_array.push_back(temp);
		s.push(start);
		s.push(end);
	}
}
	for(int i =0; i < Q; i++){
		if(query[i]=='!') index = (index + N - 1)%N;
		else cout << min(rotate_array[index],K) << endl;
	}
	return 0;
}
	        	

