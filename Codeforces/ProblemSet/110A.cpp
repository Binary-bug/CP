#include<iostream>

using namespace std;

int main(){
	char c;
	int n=0;
	while((c = getchar())!= EOF) if(c == '4' || c == '7') n++;
	(n == 4 || n== 7) ? (cout << "YES" << endl) : (cout << "NO" << endl);
	return 0;
}
