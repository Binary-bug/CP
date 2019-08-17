#include<iostream>


using namespace std;

bool g[1234][1234];
int leaves[1234]={0};
int n;
bool spruce=true;
void dfs(int v){
	if(!leaves[v]) return;
	int count =0;
	for(int i =v+1; i < n+1; i++){
		if(g[v][i]) {
		   if(leaves[i]) dfs(i);
		   else count++;
		}
	}
	if(count < 3) {
		spruce = false;
		return ;
	}

}


int main(){
	cin >> n;
	for(int i= 1; i < n; i++){
		int x;
		cin >> x;
		g[x][i+1]=1;
		leaves[x] = 1;
	}
	dfs(1);
	cout << (spruce ? "Yes" : "No") << endl;
	return 0;
}
	
