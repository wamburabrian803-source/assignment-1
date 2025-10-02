/*
Name:Brian Gachoki
REG:CT100/G/26160/25
DESC:C PROGRAMMING FOR WATER CHARGES PER UNIT
charges
units<30,ksh20
between 31 & 60,25 ksh
>60,ksh 30
*/
#include<stdio.h>
int main()
{
  float units;
  float amount_payable;
  printf("Enter units:");
  scanf("%f",&units);
  
  if(units > 60){
  amount_payable=30.0;
  }else if(units >= 31 && units <=60){
    amount_payable=25.0;
  }else{
    amount_payable=20.0;
  }
    printf("Amount_payable:%.2f Ksh\n",amount_payable);
    return 0;
    }