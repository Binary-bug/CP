#include<iostream>


using namespace std;


int main(){
	int n;
 	cin >> n;
	int a[123]={0};
	int ones = 0;
	for(int i = 0; i < n; i++) {
		scanf("%d",&a[i]);
		ones += a[i];
		a[i]  = (a[i] ? 1 : -1 );
	}
	int curr = a[0];
	int min_cost  = a[0];
	for(int x = 1 ; x < n; x++){
		curr = min(curr+a[x],a[x]);
		min_cost = min(curr,min_cost);
	}
	cout << ones - min_cost << endl;
	return 0;
}

	
