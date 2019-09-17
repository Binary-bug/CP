#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<set>


using namespace std;


vector<int> G[234567];

int a[234567];

int order[234567];

bool visited[234567];

int n;

bool comp(int &x, int &y){
	return a[x] < a[y];
}

void bfs(int *a){
	queue<int> q;
	q.push(0);
	int j = 0;
	while(!q.empty()){
		int x = q.front();
		q.pop();
		order[j++] = x;
		for(int i=0; i < G[x].size(); i++) if(!visited[G[x][i]]) q.push(G[x][i]);
	}
}	

		
	



int main(){
	cin >> n;
	for(int i =1; i < n; i++){
		int x,y;
		cin >> x >> y;
		x--;
		y--;
		G[x].push_back(y);
		G[y].push_back(x);
	}
	int x;
	for(int i =0; i < n; i++) cin >> x, x--,a[x]=i,visited[x]=false;
	for(int i=0; i < n; i++) sort(G[i].begin(),G[i].end(),comp);
	bfs(a);
	return 0;
}	
	
