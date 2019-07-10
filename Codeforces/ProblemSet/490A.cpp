#include<iostream>

using namespace std;


int main(){
	int n,t1,t2,t3;
	int a[5678];
	t1 = t2 = t3 =0;
	cin >> n;
	for(int i =0; i++ < n; ){
		 scanf("%d",&a[i]);
		 switch(a[i]){
			case 1: t1++;
			          break;
			case 2: t2++;
				  break;
			default: t3++;
				 break;
		}
	}
	int total = min(t1,min(t2,t3));
	cout << total << endl;
	t1=t2=t3=1;
	while(total--){
		while(a[t1]!=1) t1++;
		while(a[t2]!=2) t2++;
		while(a[t3]!=3) t3++;
	cout << t1++ << " " << t2++ << " " << t3++ << " " << endl;
	}
	return 0;
}	
	
	
