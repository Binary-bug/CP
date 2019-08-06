#include<iostream>


using namespace std;


int main(){
	int n;
	char a[12345],x;
	cin >> n;
	bool present=false;
	int len = 5*n;
	for(int i = 0; i < len; i ++){
		cin >> x;
		a[i] = x;
	}
	for(int i = 2; i < len; i+=5){
		if(a[i-1] == 79 && a[i-2] == 79){
			a[i-1]=a[i-2]='+';
			present = true;
			break;
		}
		if (a[i+1]==79 && a[i+2] == 79){
			present = true;
			a[i+1]=a[i+2]='+';
			break;
		} 
	}
	if(!present){
		cout << "NO" << endl;
		return 0;
	}
	cout << "YES";
	for(int i = 0 ; i < len; i ++){
		if(i % 5 ==0) cout << endl;
		cout << a[i];
	}
	cout << endl;
	return 0;
}	
