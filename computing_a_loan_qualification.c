/*
name:Brian Gachoki
reg:CT100/G/26160/25
description:Program to compute a loan qualification
*/

#include<stdio.h>

//main function 
int main(){
int age;
int income;

//prompt output
printf("Enter age:\n");
scanf("%d",&age);
printf("Enter income:\n");
scanf("%d",&income);
if(age>=21 & income >=21000){
printf("congratulations you qualify for the loan");
}
{
printf("unfortunately we are unable to offer you a loan at this time");
}

return 0;
}
