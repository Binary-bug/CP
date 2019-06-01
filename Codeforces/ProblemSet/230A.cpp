#include<iostream>
#include<utility>
#include<algorithm>

using namespace std;

int main(){
	int s,n;
	pair<int,int> a[10005];
	cin >> s >> n;
	for(int i = 0; i++ < n; ) cin >> a[i].first >> a[i].second;
	sort(a+1,a+n+1);
	for(int i =0; i++ < n; ){
		 if(s > a[i].first) s+= a[i].second; 
		else{ 
		cout << "NO"; 
		return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}
	
