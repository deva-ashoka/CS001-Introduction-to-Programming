#include <stdio.h>			// Header file for I/O
#include <stdlib.h>			// for exit(0)


main()					// Main function heading
{
	float inipopulation[3];		// Initial population
		// I realize that initial population must be int
		// anyways. But as, I utilise the same array for
		// calulation too, I declare it to be float.
	
	float finpopulation[3];		// Final population
	float multi[3][3];	
		// The matrix to be multiplied each time to get new value for population.
	int population[3];		// To display population as int

	int i,j,c;			// Counter variables
	int k;				// To keep track of index of number fractiojnal
					// part of which is closest to 1
	int inisum, finsum;		// Initial and final sum of populations
	float greatest;			// To store which no is closest to integer
	int n;				// No of years
	
	// Here, we take in input for current population of 3 cities
	printf("\nEnter current population of DELHI : ");
	scanf("%f",&inipopulation[0]);
	printf("Enter current population of GURGAON : ");
	scanf("%f",&inipopulation[1]);
	printf("Enter current population of NOIDA : ");
	scanf("%f",&inipopulation[2]);

	// We validate to see if population is fractional or negative
	for(i=0;i<=2;i++)
	{
		if( (inipopulation[i]<0) || ( (inipopulation[i]-(int)inipopulation[i])!=0 ) )
			// 2nd expression tries to see if population is not a whole number.
			// If inipop = 2.2, the expression evaluates to 2.2 - 2 = 0.2.
		{
			printf("\nError : Population can NOT be negative or fractional.\n\n");
			exit(0);
		}
	}
	
	// Definition of multi matrix
	multi[0][0] = 0.80;		// Delhi to Delhi
	multi[1][0] = 0.12;		// Gurgaon to Delhi
	multi[2][0] = 0.15;		// Noida to Delhi
	multi[0][1] = 0.10;		// Delhi to Gurgaon
	multi[1][1] = 0.81;		// Gurgaon to Gurgaon
	multi[2][1] = 0.05;		// Noida to Gurgaon
	multi[0][2] = 0.10;		// Delhi to Noida
	multi[1][2] = 0.07;		// Gurgaon to Noida
	multi[2][2] = 0.80;		// Noida to Noida



	// The procedure for computing population for 1st year follows
	
	// Initializing finpopulation to 0.
	for(i=0;i<=2;i++)
	{
		finpopulation[i]=0;
	}

	// Computing finpopulation after 1 year
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			finpopulation[i] += multi[j][i]*inipopulation[j];		
				// For row-column multiplication, column no remains same.
				// So its multi[j][i] and not multi[i][j].
		}
	}

	// To obtain best approximations, I increase the population by 1 for that city
	// for which fractional part is greatest and I keep on doing this till sum
	// of new populations is equal to sum of old populations.
	
	// Assign finpopulation(float) to population (int)
	for(i=0;i<=2;i++)
	{
		population[i] = (int) finpopulation[i];
	}

	// Initialise initial and final sum
	inisum = (int)(inipopulation[0]+inipopulation[1]+inipopulation[2]);
	finsum = population[0]+population[1]+population[2];

	while( (inisum) != (finsum) )		// Till ini and final sums are not equal
	{
		greatest = (finpopulation[0]-(int)finpopulation[0]);
			// For the sake of first move, set Delhi as closest to 1
		k = 0;	// We use 'k' to keep track of the entry which is closest to 1

		for(i=1;i<=2;i++)	// Comparision loop
		{
			if(greatest < (finpopulation[i]-(int)finpopulation[i])) // If new greatest
			{
				greatest = (finpopulation[i]-(int)finpopulation[i]);
				k = i;
				// Change the value to index to new " Closest to 1 ".
			}
		}
		population[k]++;	// Increment by 1 where fractional part is closest to 1
		finsum++;		// Increment final sum by 1.
	}

	printf("\nThe population of DELHI after 1 year : %d\n",population[0]);
	printf("The population of GURGAON after 1 year : %d\n",population[1]);
	printf("The population of NOIDA after 1 year : %d\n\n",population[2]);



	// Computation of population after n years begins here........	

	printf("Enter the number of years : ");
	scanf("%d",&n);

	for(c=1; c<=n; c++)			// To count 'n' years
	{
		// Initializing finpopulation to 0.
		for(i=0;i<=2;i++)
		{
			finpopulation[i]=0;
		}
	
		// Computing finpopulation after 1 year
		for(i=0;i<=2;i++)
		{
			for(j=0;j<=2;j++)
			{
				finpopulation[i] += multi[j][i]*inipopulation[j];		
					// For row-column multiplication, column no remains same.
					// So its multi[j][i] and not multi[i][j].
			}
		}

		// for next iteration, assign values of finpopulation to inipopulation
		for(i=0;i<=2;i++)
		{
			inipopulation[i] = finpopulation[i];
		}
	}

	// To obtain best approximations, I increase the population by 1 for that city
	// for which fractional part is greatest and I keep on doing this till sum
	// of new populations is equal to sum of old populations.
	
	// Assign finpopulation(float) to population (int)
	for(i=0;i<=2;i++)
	{
		population[i] = (int) finpopulation[i];
	}

	// Set values of final sum.
	// Note that inipopulation has changed from initial values, hence we use same inisum as before.
	finsum = population[0]+population[1]+population[2];
	while( (inisum) != (finsum) )		// Till ini and final sums are not equal
	{
		greatest = (finpopulation[0]-(int)finpopulation[0]);
			// For the sake of first move, set Delhi as closest to 1
		k = 0;	// We use 'k' to keep track of the entry which is closest to 1
		
		for(i=1;i<=2;i++)	// Comparision loop
		{
			if(greatest < (finpopulation[i]-(int)finpopulation[i])) // If new greatest
			{
				greatest = (finpopulation[i]-(int)finpopulation[i]);
				k = i;
				// Change the value to index to new " Closest to 1 ".
			}
		}
		population[k]++;	// Increment by 1 where fractional part is closest to 1
		finsum++;		// Increment final sum by 1.
	}
	
	printf("\nThe population of DELHI after %d year(s) : %d\n",n,population[0]);
	printf("The population of GURGAON after %d year(s) : %d\n",n,population[1]);
	printf("The population of NOIDA after %d year(s) : %d\n\n",n,population[2]);
}	