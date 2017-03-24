//Name: Madala Deva Surya Vivek
#include<stdio.h>
#include<string.h>

//function that is being called in the valid function

void complement(char s1[],char s2[])
{
 int i,j,nc=0;
 char valid1[4]={'A','T','C','G'},valid2[4]={'T','A','G','C'};

 if(strlen(s1)!=strlen(s2))
 {
  printf("\nBoth sequences are not compliment but valid. They are not compliment as they have different lengths\n");
 }
 
 else 
 {
  for(i=0;i<strlen(s1);i++)
  {

    for(j=0;j<4;j++)
    {
	if(s1[i]==valid1[j])
	{
	  if(s2[i]!=valid2[j])
          {
            printf("\nThe bases are not complaiment. Because of s1 %c and s2 %c at position %d\n",s1[i],s2[i],i+1);
            nc=1;
          }
	}
    
    }
  }
if(nc==0)
printf("\nBoth the sequence bases are compliment\n");
}
}

//function called in the main function 

void valid(char string1[],char string2[])
{
 int i,j,f1=0,f2=0,flag=0;
 char valid[4]={'G','A','T','C'};
 for(i=0;i<strlen(string1);i++) //sequence 1
 {
   f1=0;
   for(j=0;j<4;j++)
   {
    if(string1[i]==valid[j])
    {
     f1=1;
    }
   }
   if(f1==0)
{
   printf("\nSequence 1 erroneous base : %c",string1[i]);
   flag=1;
   }
 }
 for(i=0;i<strlen(string2);i++)
 {
   f2=0;
   for(j=0;j<4;j++)
   {
    if(string2[i]==valid[j])
    {
     f2=1;
    }
   }
   if(f2==0){
   printf("\nSequence 2 error base : %c",string2[i]);
   flag=1;
   }
 }
 if(flag!=1) 
 {
   complement(string1,string2);
 }
}

void main()
{
 system("clear");

 char seq1[20],seq2[20],s1,s2;

 printf("Please enter the sequence 1 (Only Uppercase): \n");
 scanf("%s",seq1);

 printf("Please enter sequence 2 (Only Uppercase): \n");
 scanf("%s",seq2);

 valid(seq1,seq2);
}
