#include<stdio.h>
int main(){
char name[100];
double salary,sold,result;
scanf("%s%lf%lf",&name,&salary,&sold);
result=salary+(sold*0.15);
printf("TOTAL = R$ %.2lf\n",result);
return 0;
}
