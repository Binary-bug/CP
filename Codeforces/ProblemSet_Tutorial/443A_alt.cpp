#import<cstdio>
int n,p[29];char m;main(){for(;m^125;m>96?n+=!p[m-97],p[m-97]++:0)m=getchar();printf("%d",n-2);}
