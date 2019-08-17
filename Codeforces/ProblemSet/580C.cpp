#include<iostream>

using namespace std;


int main(){
	int n,m;
	cin >> n >> m;
	int a[12345];
	int count=0;
	int parent[12345];
	int leaves[12345]={0};
	for(int i=0; i++ < n; ) cin >> a[i];
	for(int i =1; i < n; i++) {
		int x,y,a,b;
		cin >> a >> b;
		x = min(a,b);
		y = max(a,b);
		parent[y] = x;
		leaves[x] = -1;
	}
	int i=n+1,j,x;
	leaves[0] = -1;
	while(--i){
		if(leaves[i] == 0){
			for(j = i,x=0; j != 0;j=parent[j]){
				a[j] ? x+=a[j] : x = 0;
				if( x > m ) break;
		
			}
		 	(!j) ? count++ : 0;
		}
	}
	cout << count << endl;
	return 0;
} 
		
	
	
