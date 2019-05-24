#include<iostream>

using namespace std;

int main(){
	int n,x,max_i,min_i,max,min;
	scanf("%d",&n);
	scanf("%d",&x);
	max = min = x;
	max_i = min_i = 0;
	for(int i=1; i < n; ++i){
		scanf("%d",&x);
		if(x > max) max = x, max_i = i;
		if(x <= min) min = x, min_i = i;
	}
	(max_i > min_i)?(cout << (n + max_i - min_i - 2)):(cout << (max_i + n - min_i - 1));
	cout << endl;
	return 0;
}
		
