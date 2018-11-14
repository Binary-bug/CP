#include <iostream>
#include <vector>
#include <string>
#include <deque>

using namespace std;


int s_max(deque<int>& sums){
	int maxval=0;
	for(deque<int>::const_iterator it = sums.begin(); it!= sums.end(); ++it){
		maxval = max(maxval,*it);
	}
	return maxval;
}

int main(){


	int N,K,Q,temp;
	string query;
	scanf("%d%d%d",&N,&Q,&K);
	int index = 0;
	vector<int> bdits;
	deque<int> sums;
	vector<int> rotate_array;
	int pos=0, nev =0;
	while(N--){ 
		scanf("%d",&temp);
		if(temp){
			if(nev){
			 sums.push_back(nev);
			 nev = 0;
			}
		pos++;
		}
		else{
			if(pos){
			sums.push_back(pos);
			pos=0;
			}
		nev--;
		}	
		bdits.push_back(temp);
	}
	if(pos) sums.push_back(pos);
	if(nev) sums.push_back(nev);
	cin >> query;
	N=bdits.size();
	temp = s_max(sums);
	rotate_array.push_back(temp);
	for(int i =1; i < N; ++i){
		pos=sums.front();
		nev=sums.back();
		if(pos>0 && nev > 0){
			pos--;
			nev++;
			*(sums.end()-1)=nev;
			if(pos) *sums.begin()=pos;
			else sums.pop_front();
			temp=s_max(sums);
		}
		else if(pos > 0 && nev < 0){
			pos--;
			sums.push_back(1);
			if(pos) *sums.begin()=pos;
			else sums.pop_front();
			temp = s_max(sums);
		}
		else if(pos < 0 && nev > 0){
			pos++;
			sums.push_back(-1);
			if(pos) *sums.begin()=pos;
			else sums.pop_front();
		}else{
			pos++;
			nev--;
			*(sums.end()-1)=nev;	
			if(pos) *sums.begin()=pos;
			else sums.pop_front();
		}
		rotate_array.push_back(temp);	
	}	
	for(int i =0; i < Q ;i++){
		if(query[i] == '!') index = (index + N - 1) % N;
		else 	cout << min(rotate_array[index],K) << "\n";
	}	
	return 0;
}
	        	

