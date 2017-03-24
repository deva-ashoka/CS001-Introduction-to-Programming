//Program to find square root of inputed number using Newton Raphson Method

#include<stdio.h>

 int main()
{//function begins

float input,m,approx2,numerator,denominator; //variable declaration
int counter;
counter=1;                                           //variable initialisation

//Taking proper input

while(1)
{
printf("Enter number whose square root needs to be found=?");  // prompting user
scanf("%f",&input);                                            //storing input value
if(input>=0.0)
{
break;
}
else
{
printf("Invalid entry\n");
}
}

m=input;                                                 
approx2=m;

//calculating approximate square roots starting from itself

printf("Approximation %d is= %f\n",counter,approx2);

while(1)
{
numerator=m*m-input;
denominator=2*m;
approx2=m-(numerator/denominator);
printf("Approximation %d is= %f\n",++counter,approx2);


//checking difference between consecutive approximates

if((approx2-m)>0.01||(m-approx2)>0.01)
{
m=approx2;
continue;
}
else
{
break;
}
}

printf("Thus the final square root of input number is %f\n",approx2);

}//function ends

