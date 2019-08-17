#include<iostream>
#define LL 1000000007

using namespace std;


unsigned long long int count  = 0;
void recurs(int n, int k,int d,int x){
		if(n <d && x==0) return;
		if(n == 0){
			 count = (count + x) % LL;
			 return ;
		}
		for(int i = 1; i <= min(n,k); i++){
			if(i == d) x = 1;
			recurs(n-i,k,d,x);
		}
}


int main(){
	int n,k,d;
	cin >> n >> k >> d;
	recurs(n,k,d,0);
	cout << count << endl;
	return 0;
}
