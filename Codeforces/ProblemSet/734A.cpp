#include<iostream>

using namespace std;

int main(){
	char c;
	int n,y=0;
	cin >> n;
	while((c = getchar())!= EOF) if(c == 'A') y++;
	(y > n - y) ? (cout << "Anton" << endl) : (( y < n - y) ? ( cout << "Danik" << endl): ( cout << "Friendship" << endl));
	return 0;
}
