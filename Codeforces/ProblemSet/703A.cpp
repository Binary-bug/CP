#include<iostream>


using namespace std;

int main(){
	int w,m,c,n;
	cin >> n;
	w = 0;
	while(n--){
	cin >> m  >> c;
	w += ( m > c ) ? 1 : ( m == c ? 0 : - 1) ;
	}
	cout <<  ( w ? ( w > 0 ? "Mishka" : "Chris"): "Friendship is magic!^^") << endl;
	return 0;
}
