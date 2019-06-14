//''' Uses the idea that doubling each item is equivalent to getting back by dividing by 2'''



#include<bits/stdc++.h>
int main(){int a;char b[][8]={"Sheldon","Leonard","Penny","Rajesh","Howard"};std::cin>>a;while(a>5)a=a/2-2;std::cout<<b[a-1];}
