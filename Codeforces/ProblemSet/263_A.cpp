#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int a[5][5]={{0}};
	int temp = 0,x,y;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			scanf("%d",&temp);
			if(temp){
			x = i+1;
			y = j+1;
			break;
			}
		}
	}
	cout << abs(x-3) + abs(y-3) << endl;
	return 0;
}
	
