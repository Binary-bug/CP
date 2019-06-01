#include<iostream>
#include<array>

using namespace std;


int main(){
	int n ,x,y,i;
	array<int,3000> a;
	while(cin >> n){
	a.fill(0);
	x = 0;
	for(i = 0; i++ < n; ) cin >> y, a[abs(y-x)] = 1 , x = y;
	for(i = 0; i++ < n-1 && a[i];);
	cout << ((i == n) ? "Jolly" : "Not jolly") << endl;
	}
	return 0;
}
