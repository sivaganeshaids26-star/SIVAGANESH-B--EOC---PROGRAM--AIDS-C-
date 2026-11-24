#include <stdio.h>
int main()
{
int decimal, remainder, i = 0;
char hex[20];
printf("Enter a decimal number: ");
scanf("%d", &decimal);
while (decimal != 0)
{
remainder = decimal % 16;
if (remainder < 10)
hex[i] = remainder + 48;
else
hex[i] = remainder + 55;
decimal = decimal / 16;
i++;
}
printf("Hexadecimal Equivalent: ");
for (int j = i - 1; j >= 0; j--)
printf("%c", hex[j]);
return 0;
}
