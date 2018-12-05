#include<iostream>
using namespace std;

int main(){
	int n,x,y,count=0,res=0;
	cin >> n;
	while(n--){
		cin >> x >> y;
		count = count - x + y;
		res = max(res,count);
	}
	cout << res << endl;
	return 0;
}
