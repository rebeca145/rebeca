#include<stdio.h>
int  numPrint(int);
int main()
{
    int n = 1;
	printf("\n\n  :  USANDO RECURSÃO :\n");
	printf("-------------------------------------------------\n");
	printf(" Os numeros naturais de 1 a 50 sao :");
    numPrint(n);
    printf("\n\n");
    return 0;
}
int numPrint(int n)
{
    if(n<=50)
    {
         printf(" %d ",n);
         numPrint(n+1);
    }
}
