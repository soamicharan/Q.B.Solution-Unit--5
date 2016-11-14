#include<stdio.h>
#include<conio.h>
int main()
{
   FILE *fp1,*fp2;
   fp1=fopen("C:\\Users\\Charan\\Documents\\Q.B Solution\\Source file.txt","r");
   fp2=fopen("C:\\Users\\Charan\\Documents\\Q.B Solution\\Target file.txt","w");
   if(fp1==NULL||fp2==NULL)
   {
       printf("Error in opening files.\nExiting.....");
       exit(1);
   }
   char a;
   while((a=fgetc(fp1))!=EOF)
    fputc(a,fp2);
  printf("File copied successfully.");
      fclose(fp1);
      fclose(fp2);
 getch();
}
