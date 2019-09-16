#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;


vector<int> G[234567];

int d[234567];

int n;

void bfs(int u){
	d[u] = 0;
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int x = q.front();
		q.pop();
		for(int i=0; i < G[x].size(); i++) if(d[G[x][i]] == -1) d[G[x][i]] = d[x] + 1,q.push(G[x][i]);
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
	int a[234567];
	int x;
	for(int i =0; i < n; i++) cin >> x, x--,a[i]=x,d[i]=-1;
	bfs(a[0]);
	int d2[234567];
	for(int i=0; i < n; i++) d2[i] = d[i];
	sort(d2,d2+n);
	int sum1,sum2;
	sum1=sum2=0;
	for(int i=0; i < n; i++){
		sum1 += d2[i];
		sum2 += d[a[i]];
		if(sum1 != sum2){
			puts("NO");
			return 0;
		}
	}
	puts("YES");
	return 0;
}	
	
