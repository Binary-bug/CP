#include<iostream>
#include<queue>


using namespace std;


unsigned long long int set1=0,set2=0;
vector<int> g[123456];


void dfs(int v,int par,bool level){
	int x = g[v].size();
	if(par != -1) x--;
	if(!x) return;
	if(!level) set2+= x;
	else set1+= x;
	for(int i =0 ; i < g[v].size(); i++) {
		if(g[v][i] != par){ 
			dfs(g[v][i],v,!level);
		}
	}
	return;
}
		

int main(){
	int n;
	int x,y;
	cin >> n;
	for(int i =1; i < n;i++){
		cin >> x >> y;
		x--;
		y--;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	dfs(0,-1,false);
//	cout << set1 << " " << set2 << endl;
	cout << (set1+1)*set2-n+1<<endl;
	return 0;
}	
		
		 
