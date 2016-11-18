#include<stdio.h>
#include<conio.h>
int main()
{
   char ch[0];
   printf("Enter a Character.\n");
   scanf("%s",ch);
   if(ch[0]>=97&&ch[0]<=122)
    strupr(ch);
   else
    strlwr(ch);
   printf("%s",ch);
 getch();
}
