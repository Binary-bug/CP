#include<iostream>

using namespace std;


int main(){
	int n,m;
	cin >> n >> m;
	bool possible=true;
	int c = 1,x,y;
	while(possible){
		x = n - c*m;
		y = 2*c*m - n;
		if(x >=0){
			if(y < 0) c++;
			else possible = false;
		}
		else{
			cout << -1 << endl;
			return 0;
		}
	}
	cout << c*m << endl;
	return 0;
}
				
		
