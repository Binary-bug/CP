#include<iostream>

using namespace std;


int main(){
	int n,a,b,c,x=0,y=0,z=0;
	cin >> n;
	while(n-- && scanf("%d %d %d",&a,&b,&c)) { x +=a ; y+=b ; z+= c;}
	printf((x|y|z)?"NO\n":"YES\n");
	return 0;
}

