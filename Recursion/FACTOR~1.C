//Program for finding the factorial of the given integer
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//Recursive function
long factorial(int n)
    {
      if (n == 0)
	return 1;
      else
	return(n * factorial(n-1));
    }


int main()
    {
      int n;
      long f;
      clrscr();

      printf("Enter an integer whose factorial is to be find\n");
      scanf("%d", &n);

      if (n < 0)
	printf("Factorial of negative integer is not defined\n");
      else
      {
	f = factorial(n);
	printf("%d! = %ld\n", n, f);
      }
      getch();
      return 0;
    }

