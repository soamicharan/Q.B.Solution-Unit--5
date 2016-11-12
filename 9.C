#include<stdio.h>
#include<conio.h>
main()
{
int a;
printf("ASCII Character\tASCII Value\n");
for(a=32;a<=255;a++)
printf("%c\t%d\n",a,a);

getch();
}