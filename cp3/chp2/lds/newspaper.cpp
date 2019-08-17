#include<iostream>
#include<string>
#include<array>
#include<iomanip>

using namespace std;

int main(){
	int N,K,M,p;
	float x;
	unsigned char c;
	scanf("%d",&N);
	getchar();
	array<int,257> price;
	array<int,257> count;
	cout << fixed << setprecision(2);
	while(N--){
		scanf("%d",&K);
		getchar();
		price.fill(0);
		count.fill(0);
		while(K--){
			scanf("%c",&c);
			getchar();
			scanf("%d",&p);
			getchar(); 
			price[c] = p;
		}
		scanf("%d",&M);
		getchar();
		while(M--) while((c = fgetc(stdin)) != '\n') count[c]++;
		x = 0.00;
		for(int i=0; i < 257; i++) x+=(count[i] * price[i]);
		cout << (float) x / (float) 100 << "$" << endl;
	}
	return 0;
}
		
		
		
