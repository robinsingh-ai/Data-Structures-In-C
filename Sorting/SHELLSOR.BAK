
//Implementation of shell sort

#include<stdio.h>
#include<conio.h>
void ShellSort(int a[], int n)
{
    int i, j, inc, val;
    for(inc = n/2; inc > 0; inc /= 2)
    {
	for(i = inc; i < n; i++)
	{
	    val = a[i];
	    for(j = i; j >= inc; j -= inc)
	    {
		if(val < a[j-inc])
		    a[j] = a[j-inc];
		else
		    break;
	    }
	    a[j] = val;
	}
    }
}

int main()
{
    int i, n, a[10];
    clrscr();
    printf("Enter the number of elements :: ");
    scanf("%d",&n);
    printf("Enter the elements :: ");
    for(i = 0; i < n; i++)
    {
	scanf("%d",&a[i]);
    }
    ShellSort(a,n);
    printf("The sorted elements are :  ");
    for(i = 0; i < n; i++)
	printf("%d  ",a[i]);
    printf("\n");
    getch();
    return 0;
}