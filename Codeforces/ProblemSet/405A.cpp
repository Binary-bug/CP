#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){
	int n,i;
	vector<int> height;
	cin >> n;
	while(n--) cin >> i, height.push_back(i);
	sort(height.begin(),height.end());
	n = height.size();
	for(int j=0; j < n; j++) cout << height[j] << " ";
	return 0;
}	
