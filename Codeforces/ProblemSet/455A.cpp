#include<iostream>


using namespace std;


int boredom(int *a,int j){
	int i = j;
	if(i == 1) return a[1];
	else if(i == 0) return 0;
	else return max(boredom(a,i-1),i*a[i] + boredom(a,i-2));
	
}

int main(){
	int n,x;
	int a[123456]={0};
	int m[123456]={0};
	cin >> n;
	for(int i=0; i++ < n;a[x]++) cin >> x;
	cout << boredom(a,n) << endl;
	return 0;
}
