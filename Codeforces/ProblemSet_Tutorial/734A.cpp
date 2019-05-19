#import<cstdio>
int n,p;char x;main(){for(scanf("%d ",&n);n--;x%2?p++:p--)x=getchar();puts(p?p>0?"Anton":"Danik":"Friendship");



//

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  int a = count(s.begin(), s.end(), 'A');
  printf("%s", a > n - a ? "Anton" : (a < n - a ? "Danik" : "Friendship"));
  return 0;
}
