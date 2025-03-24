#include<stdio.h>
int main(){
int code1,code2,quan1,quan2;
float price1,price2,result;
scanf("%d%d%f",&code1,&quan1,&price1);
scanf("%d%d%f",&code2,&quan2,&price2);
result=((quan1*price1)+(quan2*price2));
printf("VALOR A PAGAR: R$ %.2f\n",result);
return 0;
}
