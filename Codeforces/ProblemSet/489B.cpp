#include<iostream>
#include<algorithm>


using namespace std;


int main(){
	int n,m;
	int a[105]={0};
	int b[105]={0};
	cin >> n;
	for(int i =0; i++ < n; ) scanf("%d",&a[i]);
	cin >> m;
	for(int j=0; j++ < m;) scanf("%d",&b[j]);
	sort(a+1,a+n+1);
	sort(b+1,b+m+1);
	int count = 0;
	for(int i = 1; i <= n ; i++){
		for( int j =1; j <= m; j++){
			if(abs(a[i]-b[j])<=1){
				b[j] = 1000;
				count ++;
				break;
			}
		}
	}
	cout << count << endl;
	return 0;
}	
	
