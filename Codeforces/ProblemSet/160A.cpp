#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){
	int n,x,i;
	int sum = 0;
	vector<int> coins;
	cin >> n;
	while(cin >> x){
		sum+=x;
		coins.push_back(x);
	}
	sort(coins.rbegin(),coins.rend());
	x=0;
	for(i=0; i!=coins.size(); i++){
		x+=coins[i];
		if(x > sum - x) break;
	}
	cout << i+1 << endl;
	return 0;
} 	
