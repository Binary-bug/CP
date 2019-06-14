#include <bits/stdc++.h>
using namespace std;
int main()
{
	int f[4005],n,a,i,j;
	fill(f+1,f+4005,-1e9);
        cin>>n;
	for(;cin>>a;)
		for(i=a;i<=n;i++)
			f[i]=max(f[i],f[i-a]+1);
	cout<<f[n];
}
