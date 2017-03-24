//Name: Deva Surya Vivek Madala
#include<stdio.h>

main()
{
int n, size, c, count, j, max=0, median, e, b;
float array[100], mean, sum=0, mode, a, minimum, maximum, medianeven, d;

printf("Enter the size of the array: \n");
scanf("%d", &n);

printf("Please enter %d numbers:\n", n);
for (c = 0; c < n; c++)
scanf("%f", &array[c]);

//Mean

for (c=0; c<n; c++)
{
sum=sum+array[c];
}
mean=sum/n;
printf("Arithmetic mean = %f \n", mean);

//Mode

for(c=0;c<n;c++)
{
  count=1;

  for(j=c+1;j<n;j++)
   {
    if(array[c]==array[j])
     {
      count++;
     }
   }

   if(count>max)
    {
     max=count;
     mode=array[c];
    }

   if(count==max)
    {
     if(array[c]>mode)
      {
       mode=array[c];
      }
    }
}
printf("The mode of this series or array of numbers is %f \n",mode);

//Median

//sort the list first


 for (c = 0; c < n; ++c)
    {
        for (j = c + 1; j < n; ++j)
        {
            if (array[c] > array[j])
            {
                a =  array[c];
                array[c] = array[j];
                array[j] = a;
            }
        }
    }
    

if(n%2!=0)
{
median=(n+1)/2;
printf("Median= %f \n", array[median-1]);
}

if(n%2==0)
{
e=(n/2)-1;
b=((n/2)+1)-1;
d=array[e]+array[b];
medianeven=d/2;
printf("Median=%f \n", medianeven);
}

//minimum value

minimum=array[0];

for (c=1 ; c < n ; c++ ) 
    {
        if ( array[c] < minimum ) 
        {
           minimum = array[c];
        }
    } 
 
    printf("Minimum value %f \n", minimum);

//maximum value

maximum = array[0];
 
  for (c = 1; c < n; c++)
  {
    if (array[c] > maximum)
    {
       maximum  = array[c];
    }
  }
 
  printf("Maximum value is %f \n", maximum);
}






