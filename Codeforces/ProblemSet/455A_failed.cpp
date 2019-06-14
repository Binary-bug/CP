#include<iostream>
#include<algorithm>

using namespace std;


long long int boredom(long long int *a,long long int *m,int left, int right){
	long long int c=0,d=0;
	if(m[left] == -1){
		if(left >= right-1) m[left] = 0;
		else{
			c = left * a[left] + boredom(a,m,left+2,right);
			d = boredom(a,m,left+1,right);
			m[left] = max(c,d);
		}
	}
	return m[left];
}

int main(){
	int n,x;
	long long int a[123456]={0};
	long long int m[123456];
	fill_n(m,123456,-1);
	cin >> n;
	for(int i=0; i++ < n;a[x]++) cin >> x;
	cout << boredom(a,m,1,123455) << endl;
	return 0;
}
