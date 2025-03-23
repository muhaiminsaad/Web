#include<stdio.h>
int main(){
int num,hour;
float amount;
double salary;
scanf("%d%d%f",&num,&hour,&amount);
salary=hour*amount;
printf("NUMBER = %d\nSALARY = U$ %.2lf\n",num,salary);
return 0;
}
