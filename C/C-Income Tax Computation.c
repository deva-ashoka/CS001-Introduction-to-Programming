/*Calculate the income tax of a person, based on given rules*/
#include<stdio.h>
main()
{
int gross,base,net,age,agri=0,ret_savings=0,infra_inv=0,ashoka_gifts=0,health_cost=0,interest=0; /*Declare necessary  variables*/
char gender;
float tax;
printf(" Tax Calculator \n "); /*Welcome and information message*/
printf("\nYour gender M/F  "); 
scanf("%c",&gender); 
printf("\nYour age in years ");
scanf("%d",&age);
printf("\nYour gross income  ");
scanf("%d",&gross);
printf("\nIncome from agriculture (Enter 0 if none)  ");
scanf("%d",&agri);
printf("\nSavings for retirement (Enter 0 if none) ");
scanf("%d",&ret_savings);
printf("\nInvestments you have made in infrastructure (Enter 0 if none)  ");
scanf("%d",&infra_inv);
printf("\nGifts made to Ashoka University and any other approved charitable organisation (Enter 0 if none) ");
scanf("%d",&ashoka_gifts);
printf("\nHealth costs of dependent parents (Enter 0 if none) ");
scanf("%d",&health_cost);
printf("\nInterest paid on education loans (Enter 0 if none) "); 
scanf("%d",&interest); /*Input informatio from user*/
if(ret_savings>100000)
ret_savings=100000;
if(infra_inv>20000)
infra_inv=20000;
if(health_cost>50000)
health_cost=50000; /*Calculatons*/
net = gross - (interest + health_cost + ashoka_gifts + agri + ret_savings + infra_inv);
/*Determination of tax exempted income*/
/*Male*/
if((gender=='M')||(gender=='m'))
{
if(age>=80)
base=500000;
else if((age<80)&&(age>=60))
base=300000;
else 
base=200000;
}
/*Female*/
else 
{
if(age>=80)
base=500000;
else if ((age<80)&&(age>=60))
base=300000;
else
base=250000;
}
/*Finding tax*/
if(net<=base)
tax=0;
else if((net>base)&&(net<500000))
tax=(net-base)*0.10;
else if((net>500000)&&(net<=1000000))
tax=(((500000-base)*0.10)+((net-500000)*0.20));
else 
tax=(((500000-base)*0.10)+(100000)+((net-1000000)*0.30));
tax=tax*1.03;
/*Print the tax amount*/
printf("\n Your tax amount is  %f",tax);
}

