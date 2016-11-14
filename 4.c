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
    printf("Enter Students details -\n");
    int a,b,c;
    for(a=0;a<50;a++)
    {
        printf("Enter detail of student %d\n",a+1);
        printf("Student Number - ");
        scanf("%d",&s[a].s_num);
        printf("Student Name - ");
        scanf(" %100[^\n]",&s[a].s_name);
        printf("Student Address - ");
        scanf(" %100[^\n]",&s[a].s_address);
        printf("Student DOB - ");
        scanf(" %11[^\n]",&s[a].s_dob);
        printf("Student marks - ");
        scanf("%d",&s[a].s_marks);
    }
   FILE *fp;
   fp=fopen("C:\\Users\\Charan\\Documents\\Q.B Solution\\studentinfo.txt","w");
   if(fp==NULL)
   {
       printf("Error in opening files.\nExiting.....");
       exit(1);
   }
   fprintf(fp,"Student Details - \n");
   for(a=0;a<50;a++)
   {

        fprintf(fp,"\n\nStudent Number - ");
        fprintf(fp,"%d",s[a].s_num);
        fprintf(fp,"\nStudent Name - ");
        fputs(s[a].s_name,fp);
        fprintf(fp,"\nStudent Address - ");
        fputs(s[a].s_address,fp);
        fprintf(fp,"\nStudent DOB - ");
        fputs(s[a].s_dob,fp);
        fprintf(fp,"\nStudent marks - ");
        fprintf(fp,"%d",s[a].s_marks);
   }
    printf("File Created successfully.\n");
    fclose(fp);
 getch();
}
