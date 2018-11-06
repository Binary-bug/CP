#include<iostream>

using namespace std;

int main(){
	int T,N,i,temp;
	cin >> T;
	while(T--){
		temp = 1;
		cin >> N;
	for(i=0; i < N; i++) temp = temp * 2;
      	if(N % 2 !=0){
		if((temp+1)%3 == 0) cout << (int) ((temp+1)/3) << " " << temp;
		else cout << (temp + 1) << " " << (3 * temp);
	}
	else{
		if((temp-1)%3 == 0) cout << (int) ((temp-1)/3) << " " << temp;
		else cout << (temp - 1) << " " << (3 * temp);
	}
	if(T) cout <<" ";
	}
	return 0;
}	
