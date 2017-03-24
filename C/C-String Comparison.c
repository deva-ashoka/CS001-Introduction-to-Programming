
#include<stdio.h>                                    //Including the header file

int stringcmp(char s1[],char s2[],int i,int j)         //defining function which will compare the characters of the two strings
	{
		if(s1[i]=='\0'&&s2[j]=='\0')           //Base condition-when both the strind end
			return(0);
		if(s1[i]>='A'&&s1[i]<='Z')             //condition to convert capital letters to small
			s1[i]+=32;
		if(s2[j]>='A'&&s2[j]<='Z')             //condition to convert capital letters to small
			s2[j]+=32;
		if(!((s1[i]>='a'-1&&s1[i]<='z'+1)||(s1[i]>='0'-1&&s1[i]<='9'+1)||(s1[i]=='\0')))   //checking for special character
			return(stringcmp(s1,s2,i+1,j));
		if(!((s2[j]>='a'-1&&s2[j]<='z'+1)||(s2[j]>='0'-1&&s2[j]<='9'+1)||(s2[j]=='\0')))   //checking for special character
			return(stringcmp(s1,s2,i,j+1));
		if(s1[i]==s2[j])                       //comparing corresponding characters of each string
			return(stringcmp(s1,s2,i+1,j+1));  //Recursion used by incrementing the values of 'i' and 'j' and calling itself again
		else if(s1[i]>s2[j])                   //checking if string1 is greater
			return(1);
		else                                 //else string2 is greater
			return(-1);
	}

main()                                               //Main function of the program
	{
		int z;                               //Declaring variables
		char s1[50],s2[50];

		printf("Enter two strings:\n");      //prompting the user
		scanf("%s %s",s1,s2);                  //Inputting two strings

		z=stringcmp(s1,s2,0,0);                //calling the comparision function and and passing initial arguments
		if(z==0)
			printf("Both the strings are same");    //Final output statements depending on the value returned by the comparision function
		else if(z==-1)
			printf("String 2 is higher");
		else
			printf("String 1 is higher");
	}