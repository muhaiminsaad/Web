#include<stdio.h>
int main(){
int N,i,count;
scanf("%d",&N);

if(N%2==0)
{   
    count=N+11;
    for(i=N+1;i<=count;i=i+2)
    {printf("%d\n",i);}
}
else
{   
    count=N+10;
    for(i=N;i<=count;i=i+2)
    {printf("%d\n",i);}
}
return 0;
}
