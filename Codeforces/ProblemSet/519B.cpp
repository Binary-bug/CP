#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){
	int n,d;
	cin >> n;
	vector<int> a;
	vector<int> b;
	vector<int> c;
	for(int j = 0; j < n; j++) cin >> d, a.push_back(d);
	for(int j = 0; j < n-1; j++) cin >> d, b.push_back(d);
	for(int j = 0; j < n-2; j++) cin >> d , c.push_back(d);
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	sort(c.begin(),c.end());
	int i;
	for(i = 0; i < n-1; i++) {
		if(a[i] != b[i]) {
			cout << a[i] << endl;
			break;
		}
	}
	if(i == n-1) cout << a[i] << endl;
	for(i = 0; i < n - 2 ; i++){
		if(b[i] != c[i]){
			cout << b[i] << endl;
			break;
		}
	}
	if(i == n-2) cout << b[i] << endl;
	return 0;
}	
