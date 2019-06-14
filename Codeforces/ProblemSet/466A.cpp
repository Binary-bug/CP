#include<iostream>


using namespace std;


int main(){
	int i,x,n,m,a,b;
	cin >> n >> m >> a >> b;
	int dp[1005];
	fill_n(dp,1005,1000007);
	dp[0]=0;
	for(i = m; i<=n+m; i++) dp[i] = min(dp[i-m] + b,dp[i]);
	for(i= 1; i<=n+m; i++) dp[i] = min(dp[i-1] + a, dp[i]);
	for(i= n,x=dp[n];i++ <= n+m;) x=min(x,dp[i]);
	cout << x << endl;
	return 0;
}
	
