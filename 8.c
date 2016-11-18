#include<stdio.h>
#include<conio.h>
int main()
{

    float num[11];
    int a;
    printf("Enter any floating numbers.\n");
    for(a=0;a<10;a++)
        scanf("%f",&num[a]);
   FILE *fp;
   fp=fopen("C:\\Users\\Charan\\Documents\\Q.B Solution\\studentinfo.txt","w");
   if(fp==NULL)
   {
       printf("Error in opening files.\nExiting.....");
       exit(1);
   }
for(a=0;a<10;a++)
{
    fwrite(&num[a],sizeof(float),1,fp);
}
printf("File created successfully.\n");
    fclose(fp);
    fp=fopen("C:\\Users\\Charan\\Documents\\Q.B Solution\\studentinfo.txt","r");
    for(a=0;a<3;a++)
{
    fread(&num[a],sizeof(float),1,fp);
} for(a=0;a<3;a++)
        printf("%f\n",num[a]);
 getch();
}
