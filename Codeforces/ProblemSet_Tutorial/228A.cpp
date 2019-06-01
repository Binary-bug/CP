#import<cstdio>
int a,b,c,d;main(){scanf("%d%d%d%d",&a,&b,&c,&d);printf("%d",(a==b)+(a==c|b==c)+(a==d|b==d|c==d));}
