#include<iostream>
#include<set>

using namespace std;

int main(){
	int n,x;
	set<int> levels;
	cin >> n;
	int p,q;
	cin >> p;
	while(p--) cin >> x, levels.insert(x);
	cin >> q;
	while(q--) cin >> x, levels.insert(x);
	(levels.size() == n) ? (cout << "I become the guy."):(cout << "Oh, my keyboard!");
	cout << endl;
	return 0;
}
