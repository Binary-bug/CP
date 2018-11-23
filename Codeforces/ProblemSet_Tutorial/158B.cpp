#include<iostream>
#include<map>

using namespace std;


int main(){
	int n,x;
	int A[5]={0};
	cin >> A[0];
	while(cin >> n) A[n]++;
	A[1] = max(A[1]-A[3],0);
	n = A[3] + A[4] + (A[1] + 2*A[2] + 3) / 4;
	cout << n;
	return 0;
}
	
