#include<iostream>

using namespace std;


int main(){
	char c;
	cin >> c;
	bool left;
	left = (c == 'R') ? true  : false;
	char a[30] = {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
		      while(cin >> c){
				for(int i =0; i < 30; i++){
					if( a[i] == c){
					 cout << (left ? a[i-1]: a[i+1]);
					 break;
					}
				}
			}
	return 0;
}

