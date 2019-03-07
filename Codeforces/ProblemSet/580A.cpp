#include<iostream>


using namespace std;

int main(){
	int n,j,i=0;
	int max=0;
	cin >> n;
	int a[100004]={0};
	while(cin >> a[i++]);
	for(j=0,i=0;i < n;++i){
		while(a[j] <= a[j+1] && j<n) j++;
		if((j-i+1) > max) max = j-i+1;
		i=j++;
	}
	cout << max << endl;
	return 0;
}
			
	
