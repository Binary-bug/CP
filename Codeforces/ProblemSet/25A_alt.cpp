#include <bits/stdc++.h>
using namespace std;
long i,x,k[3],d[3],n;
main()
{
	cin>>n;
	for (i=1;i<=n;i++)
	{
		cin>>x;
		k[x%2]=i;
		d[x%2]++;
	}
	cout<<(d[1]==1?k[1]:k[0]);
	return 0;
}
