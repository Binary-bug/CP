#include<iostream>

using namespace std;

int main(){
	int P,V,T;
	int N,count = 0;
	cin >> N;
	while(N--){
	cin >> P >> V >> T;
	if(P + V + T > 1) count++;
	}
	cout << count << endl;
	return 0;
}
