#include<iostream>

using namespace std;

int main(){
	int n,k,x=0,i=0,temp=0;
        cin >> n >> k;
	for(i=0; i<n; i++){
		cin >> x;
		if(!x) break;
		if(i == k-1) temp = x;
	        if(x < temp) break;	
	}	
	cout << i;
	return 0;
}	
