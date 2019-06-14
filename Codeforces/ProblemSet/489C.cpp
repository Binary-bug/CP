//'''This code is from after reading tutorial'''
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;



bool can(int m,int s){	
	return s >=0 && s <= 9*m;
}

int main(){
	int a,b,c,d,i,m,s;
	cin >> m >> s;
	string minn;
	a = s;
	for(i=0 ; i < m; i++){
		for(d=0; d < 10; d++){
			if((i > 0 || d > 0 || (m == 1 && d==0)) && can(m-i-1,s-d)){
				minn += char('0'+d);
				s-=d;
				break;
			}
		}
	}
	if(minn.size() != m){
		cout << -1 << " " << -1 << endl;
		return 0;
	}
	cout << minn << " ";
	string maxx;
	for(i=0; i < m; i++){
		for(d=9; d >=0; d--){
			if(can(m-i-1,a-d)){
				maxx += char('0'+ d);
				a -=d ;
				break ;
			}
		}
	}
	cout << maxx << endl;		
	return 0;
}
		
