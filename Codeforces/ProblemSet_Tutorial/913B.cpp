#include<iostream>
#include<vector>

using namespace std;


int main(){
	int n;
	cin >> n;
	vector<int> degree(n),p(n),leaves(n);
	for(int i=0; i < n; i++){
		cin >> p[i];
		p[i]--;
		degree[p[i]]++;
	}
	for(int i =0; i < n; i++) if(degree[i] == 0) leaves[p[i]]++;
	for(int i =0; i < n; i++){
		if(degree[i] > 0 && leaves[i] < 3){
			puts("No");
			return 0;
		}
	}
	puts("Yes");
	return 0;
}
