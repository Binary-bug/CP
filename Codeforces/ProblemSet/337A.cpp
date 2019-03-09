#include<iostream>
#include<algorithm>

using namespace std;


int main(){
	int n,m,i=0,max=1000;
	int f[1004];
	cin >> n >> m;
	while(m--)scanf("%d",&f[i++]);
	m=i;
	sort(f,f+m);
	for(i=0;i <= m-n;i++) max = min(max,(f[i+n-1]-f[i]));
	cout << max << endl;
	return 0;
}
		
		
