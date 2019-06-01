#include<iostream>
#include<array>
#include<algorithm>
#include<iomanip>


using namespace std;


int main(){
	int n,l,i=0;
	cin >> n >> l;
	cout << fixed << setprecision(10);
	array<int,1005> a;
	for(int i=0; i < n; cin >> a[i],i++);
	sort(a.begin(),a.begin()+n);
	float diff=max(a[0],l-a[n-1]);
	for(int i=0; i++ < n-1; diff=max(diff,(float) (a[i] - a[i-1])/2));
	cout << diff << endl;
	return 0;
}
	 
