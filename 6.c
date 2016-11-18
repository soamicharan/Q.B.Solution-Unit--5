#include<stdio.h>
#include<conio.h>
int main()
{
    struct studentinfo
    {
        int s_num;
        char s_name[50];
        char s_address[100];
        char s_dob[11];
        int s_marks;
    };
    struct studentinfo s[5];
    int a,c=0;char b,te[10000];
   FILE *fp;
   fp=fopen("C:\\Users\\Charan\\Documents\\Q.B Solution\\studentinfo.txt","r");
   if(fp==NULL)
   {
       printf("Error in opening files.\nExiting.....");
       exit(1);
   }

 while((b=fgetc(fp))!=EOF)
        {
            te[c]=b;
            c++;
        }

    printf("File Read successfully.\n");
  puts(te);
    fclose(fp);
 getch();
}
