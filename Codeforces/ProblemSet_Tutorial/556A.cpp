#include<iostream>

using namespace std;


int main(){
	int n;
	char c;
	cin >> n;
	int ones,zeros;
	ones=zeros=0;
	while(n--){
		cin >> c;
		(c == '0')? zeros++ : ones++ ;
	}
	cout << abs(ones-zeros) << endl;
	return 0;
}
