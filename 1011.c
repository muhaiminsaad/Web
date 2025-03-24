#include<stdio.h>
int main(){
double R,pi=3.14159,result;
scanf("%lf",&R);
result=((4/3.0)*pi*(R*R*R));
printf("VOLUME = %.3lf\n",result);
return 0;
}
