//Program to find mode of a range

#include<stdio.h>

int main()
{
int N,i,j,mode,count,max=0;  //variable declaration and initialisation of max

printf("Enter the size of range you want to evaluate \n"); //prompting user to enter N value
scanf("%d",&N);  //Taking value from user

int arr[N];      //array declaration
 
//loop to take numbers

for(i=0;i<N;i++)
{
printf("Enter your number between 1 to 20\n");
scanf("%d",&arr[i]);
}

//loop to calculate mode

for(i=0;i<N;i++)
{
  count=1;

  for(j=i+1;j<N;j++)
   {
    if(arr[i]==arr[j])
     {
      count++;
     }
   }

   if(count>max)
    {
     max=count;
     mode=arr[i];
    }

   if(count==max)
    {
     if(arr[i]>mode)
      {
       mode=arr[i];
      }
    }
}

printf("The mode of this series is %d with a count of %d. \n",mode,max); //printing mode

}
