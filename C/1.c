//Name: Deva Surya Vivek Madala
#include<stdio.h>
#include<stdlib.h>
main()
{
int a[10000], c, n, i, k;
int j;
int flag;

printf("Enter the number of elements in the list of numbers: \n");
scanf("%d", &n);

printf("Type the list of numbers: (Tap enter after giving each input) \n");
for (c = 0; c < n; c++)
scanf("%d", &a[c]);

 printf("Prime numbers are: \n");
c=0;

k=0;
while(k<n)
{
i=a[c];
flag = 0;
for (j = 2; j <= i / 2; j++)
{
if ((i % j) == 0)
{
flag = 1;
break;
}
}
if ((flag == 0)&&(i!=0)&&(i!=1))
{
printf("%d \t", i);
}
c++;
k++;
}
}

