#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>


using namespace std;


int main(){
	int n;
	cin >> n;
	string s1,s2,s3;
	int a[401] = {0};
	int counter = 0;
	map<string, int>people;
	for(int i =0; i < n; i++){
		cin >> s1 >> s3 >> s2;
		transform(s1.begin(),s1.end(),s1.begin(),::tolower);
		transform(s2.begin(),s2.end(),s2.begin(),::tolower);	
		int x,y;
		if(!people[s1]) people[s1] = ++counter;
		if(!people[s2]) people[s2] = ++counter;
		x = people[s1];
		y = people[s2];
		a[x] = y;
	}
	int mx = 0;
	for(int i = counter; i > 0 ;i--){
		int x = 1,j=i;
		while(a[j]!=0) x++,j=a[j];
		mx = max(mx,x);
	}
	cout << mx << endl;
	return 0;
} 
