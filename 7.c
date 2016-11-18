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
    int a,c=0;char *b,te[10000];b=(char*)malloc(4000*sizeof(char));
   FILE *fp;
   fp=fopen("C:\\Users\\Charan\\Documents\\Q.B Solution\\studentinfo.txt","rb");
   if(fp==NULL)
   {
       printf("Error in opening files.\nExiting.....");
       exit(1);
   }
for(c=0; c<4000; c++)
{
    fread(b,4096,1,fp);
}


    printf("File Read successfully.\n");
  puts(b);
    fclose(fp);
 getch();
}
