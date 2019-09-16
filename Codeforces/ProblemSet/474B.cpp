#include<iostream>

using namespace std;

int search(int *a,int p,int q,int val){
		while(p!=q){
			int mid = (p+q)/2;
			if(a[mid] < val) p = mid+1;
			else q = mid;
		}
		return p+1;
}


int main(){
	int n;
	int a[123456];
	int m;
	cin >> n;
	for(int i=0,x=0; i<n;i++) cin >> m, x+=m, a[i]= x;
	cin >> m;
	while(m--){
		int x;
		cin >> x;
		cout << search(a,0,n-1,x) << endl;
	}
	return 0;
}
	
