#include<stdio.h>
int main(){
int N,count;
scanf("%d",&N);

count=N/365;
printf("%d ano(s)\n",count);
N%=365;

count=N/30;
printf("%d mes(es)\n",count);
N%=30;

printf("%d dia(s)\n",N);

return 0;
}
