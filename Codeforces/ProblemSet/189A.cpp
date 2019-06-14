#include<iostream>

using namespace std;


int main(){
	int n,res1=0,res2,x=0;
	int a,b,c;
	cin >> n >> a >> b >> c;
	for(int i=0;i <= n/a; i++){
		res2 = -20000;
		for(int j=0; j <= (n-(a*i))/b; j++){
			x = (n - (a*i) - (b*j));
			res2=max(res2,(j + ((x % c) ? -10000 : x/c)));
		}
		res1=max(res1,i+res2);
	}
	cout << res1 << endl;
return 0;
}
			
		
