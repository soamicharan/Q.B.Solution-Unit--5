#include<stdio.h>
#include<conio.h>
int main()
{
   FILE *fp1,*fp2;
   char source[255],target[255];
   printf("Enter source file name.\n");gets(source);printf("Enter target file name.\n");gets(target);
   fp1=fopen(source,"w");
   fp2=fopen(target,"w");
   if(fp1==NULL||fp2==NULL)
   {
       printf("Error in opening files.\nExiting.....");
       exit(1);
   }
   char a[255],b;
   printf("Enter text.\n");
   gets(a);
   fputs(a,fp1);
    printf("Entry successfully.\n");
    fclose(fp1);
    fp1=fopen(source,"r");
    while((b=fgetc(fp1))!=EOF)
        fputc(b,fp2);
  printf("File copied successfully.");
      fclose(fp1);
      fclose(fp2);
 getch();
}
