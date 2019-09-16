#include<iostream>
#include<vector>
#include<iomanip>


using namespace std;



int degree[123456]={0};
int visited[123456]={0};
long double average[123456]={0};
vector<int> parent[123456];



void dfs(int v){
		if(degree[v]==1 && v)  return;
		visited[v] = 1;			
		for(int j =0; j < parent[v].size(); j++){
			int x = parent[v][j];
			if(!visited[x]){
				dfs(x);
		       		average[v] += average[x];
			}
		}
		average[v] = average[v] / (degree[v] - (v != 0));
		average[v]++;
		return ;
}
			
			





int main(){
	int n;
	cin >> n;
	if(n == 1){
		cout << 0 << endl;
		return 0;
	}
	for(int i = 1; i < n; i++){
		int x,y;
		cin >> x >> y;
		x--;
		y--;
		parent[x].push_back(y);
		degree[x]++;
		parent[y].push_back(x);
		degree[y]++;
	}
	dfs(0);
	cout << fixed;
	cout << setprecision(7);
	cout << average[0] << endl;
	return 0;
}			 	
		
