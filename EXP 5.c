#include <stdio.h>
int factorialRecursive(int n)
{
if(n==0 || n==1)
return 1;
return n * factorialRecursive(n-1);
}
int fibonacciRecursive(int n)
{
if(n==0)
return 0;
if(n==1)
return 1;
return fibonacciRecursive(n-1) + fibonacciRecursive(n-2);
}
int main()
{
int a,b,temp,n,i;
int sum=0,fact=1;
int f1=0,f2=1,f3;
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("\nAfter Swapping:\n");
printf("a = %d\nb = %d\n",a,b);
printf("\nEnter n: ");
scanf("%d",&n);
printf("\nCounting:\n");
for(i=1;i<=n;i++)
printf("%d ",i);
printf("\n");
for(i=1;i<=n;i++)
sum+=i;
printf("\nSummation = %d\n",sum);
for(i=1;i<=n;i++)
fact*=i;
printf("\nFactorial (Iterative) = %d\n",fact);
printf("Factorial (Recursive) = %d\n",factorialRecursive(n));
printf("\nFibonacci (Iterative): ");
printf("%d %d ",f1,f2);
for(i=3;i<=n;i++)
{
f3=f1+f2;
printf("%d ",f3);
f1=f2;
f2=f3;
}
printf("\n");
printf("Fibonacci (Recursive): ");
for(i=0;i<n;i++)
printf("%d ",fibonacciRecursive(i));
return 0;
}
