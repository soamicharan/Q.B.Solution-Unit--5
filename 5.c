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
    for(a=0;a<2;a++)
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
   fp=fopen("C:\\Users\\Charan\\Documents\\Q.B Solution\\studentinfo.txt","wb");
   if(fp==NULL)
   {
       printf("Error in opening files.\nExiting.....");
       exit(1);
   }
   fwrite("Student Details \n",1,sizeof(struct studentinfo),fp);

   for(a=0;a<2;a++)
   {

        fwrite("\n\nStudent Number - ",1,sizeof(struct studentinfo),fp);
        fwrite(&s[a].s_num,1,sizeof(struct studentinfo),fp);
       fwrite("\nStudent Name - ",sizeof(struct studentinfo),1,fp);
        fwrite(&s[a].s_name,sizeof(struct studentinfo),1,fp);
        fwrite("\nStudent Address - ",sizeof(struct studentinfo),1,fp);
        fwrite(&s[a].s_address,sizeof(struct studentinfo),1,fp);
        fwrite("\nStudent DOB",sizeof(struct studentinfo),1,fp);
        fwrite(&s[a].s_dob,sizeof(struct studentinfo),1,fp);
        fwrite("\nStudent Marks - ",sizeof(struct studentinfo),1,fp);
        fwrite(&s[a].s_marks,sizeof(struct studentinfo),1,fp);
   }
    printf("File Created successfully.\n");
    fclose(fp);
 getch();
}
