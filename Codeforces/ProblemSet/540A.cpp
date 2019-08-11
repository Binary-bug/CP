#include<iostream>


using namespace std;


int main(){
	int n,x,count =0;
	char a[1234];
	char b[1234];
	cin >> n;
	for(int i = 0 ; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++) cin >> b[i];
	for(int i = 0; i < n; i++){
		x = abs((int)b[i]- (int)a[i]);
		count += min(x,10-x);
	}
	cout << count << endl;
	return 0;
}
