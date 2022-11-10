#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int menu();
int i;
int n=10;
   struct number
    {
        char name[21];
        char address[80];
        int roll;
        char du[10];

    } ;
int sub_menu();
int profile();
int view();
int marks_processing();
int marks_processing2();
int result();
int semester_wise_mark();
int semester01();
int semester02();
int semester03();
int semester04();
int semester05();
int semester06();
int semester07();
int semester08();
int enter_marks();
int intern_marks();
double cgpa_calculation();
double grand_cgpa_calculation();

char subject_code[8][6][14];
double cgpa;
double sub_cgpa[6];
int sub_marks;
double sem_cgpa[8]={0.0000,0.0000,0.0000,0.0000,0.0000,0.0000,0.0000,0.0000};
int search();
 int search1();
 int search2();
 int search3();
 int sm_no;
 int sp;
 int rt=0;

int main()

{
    menu();

    return 0;
}
int menu()
{
    int c;
    printf("\t\t\t\t\t\t######\t######\t######\n");

    printf("\t\t\t\t\t\t  ##  \t  ##  \t  ##\n");

    printf("\t\t\t\t\t\t  ##  \t  ##  \t  ##\t\t\t--------------\n");

    printf("\t@professionalism\t\t\t  ##  \t  ##  \t  ##\t\t\t||University||\n");

    printf("\t@excellence\t\t\t\t  ##  \t  ##  \t  ##\t\t\t||of        ||\n");

    printf("\t@respect\t\t\t\t  ##  \t  ##  \t  ##\t\t\t||Dhaka     ||\n");

    printf("\t\t\t\t\t\t  ##  \t  ##  \t  ##\t\t\t--------------\n");

    printf("\t\t\t\t\t\t######\t######\t  ##\n\n");
    printf("\t\t\t\t\t\t====================\n") ;
    printf("\t\t\t\t\t\t++++++++++++++++++++\n") ;
    printf("\t\t\t\t\t\t====================\n") ;
    printf("\t\t\t\t\tInstitute_of_Information_Technology\n");
    printf("\t\t\t\t\t*********www.iit.du.ac.bd**********\n\n\n");
    printf("\t\t\tInstitute of Information Technology(IIT),University of Dhaka \n");
    printf("\t\t\toffers Bachelor of Software Engineering(BSSE) degree from 2009.\n");
    printf("\t\t\tThis is a four year Honors program which main vision is that to \n");
    printf("\t\t\tmake a student with professionalism,excellence & respect and \n");
    printf("\t\t\twill be a perfect software engineer for any software industry.\n\n\n");
    printf("\t\t\t\t\t===================\n");
    printf("\t\t\t\t\t#WELCOME TO IITSIS#\n");
    printf("\t\t\t\t\t===================\n");
    printf("\t\t\t\t  ''IIT Student Information System''\n\n");

   printf("\t\t1.Enter_Profile\t\t\t\t\t3.Enter_Marks\n");
   printf("\t\t2.View_Profile\t\t\t\t\t4.View_Marks\n");
   printf("\t\t5.Search\n");

   printf("\t\t\t\tEnter Your Choice>>>>>>>");
    scanf("%d",&c) ;
   getchar();
    if(c==1)
    {
        profile();
    }

    else if(c==2)
    {
        view();

    }
    else if(c==3)
    {
        marks_processing();
    }
    else if(c==4)
    {
        result();
    }
      else if(c==5)
    {

        search();
    }

    else
    {
        printf("!!!!!!Wrong_Key!!!!!!");

    }

    printf("\n\n[1]---->continue\n");
    printf("[0]---->stop\n");
    printf("Enter[1 or 0]>>>>>");

    int bio;
           scanf("%d",&bio);
    if(bio==1)

    {
         sub_menu();

    }







    return 0;
}

int sub_menu()

{
     int c;
    printf("\n\n\n\t\t\t\t\t\t######\t######\t######\n");

    printf("\t\t\t\t\t\t  ##  \t  ##  \t  ##\n");

    printf("\t\t\t\t\t\t  ##  \t  ##  \t  ##\t\t\t--------------\n");

    printf("\t@professionalism\t\t\t  ##  \t  ##  \t  ##\t\t\t||University||\n");

    printf("\t@excellence\t\t\t\t  ##  \t  ##  \t  ##\t\t\t||of        ||\n");

    printf("\t@respect\t\t\t\t  ##  \t  ##  \t  ##\t\t\t||Dhaka     ||\n");

    printf("\t\t\t\t\t\t  ##  \t  ##  \t  ##\t\t\t--------------\n");

    printf("\t\t\t\t\t\t######\t######\t  ##\n\n");
    printf("\t\t\t\t\t\t++++++++++++++++++++\n") ;
    printf("\t\t\t\t\t\t====================\n") ;
    printf("\t\t\t\t\tInstitute_of_Information_Technology\n");
    printf("\t\t\t\t\t*********www.iit.du.ac.bd**********\n\n\n");

   printf("\t\t1.Enter_Profile\t\t\t\t\t3.Enter_Marks\n");
   printf("\t\t2.View_Profile\t\t\t\t\t4.View_Marks\n");
   printf("\t\t5.Search\n");
   printf("\t\t\t\tEnter Your Choice>>>>>>>");
    scanf("%d",&c) ;
   getchar();





    if(c==1)
    {

        profile();


    }

    else if(c==2)
    {
        view();

    }
    else if(c==3)

    {

        marks_processing();
    }
    else if(c==4)
    {
        result();
    }
    else if(c==5)
    {

        search();
    }

    else
    {
       printf("!!!!!!Wrong_Key!!!!!!");

    }

    printf("\n\n[1]---->continue\n");
    printf("[0]---->stop\n");
    printf("Enter[1 or 0]>>>>>");

    int bio;
           scanf("%d",&bio);
    if(bio==1)

    {
      return   sub_menu();

    }


return 0;
}









int profile()
{
      printf("\n\n\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^\n") ;
      printf("\t\t\t\t\t****Enter_Profile_Site*****\n");
      printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~\n") ;

           printf("Number_of_Students>>>>>>");

         scanf("%d",&n);
         getchar();
    FILE*ptr;

    struct number iitian[n];

    ptr=fopen("Student_information_database.txt","w");

    for(i=0; i<n; i++)
    {
            printf("\nName>>>>>");
          scanf("%s",iitian[i].name);





        printf("Address>>>>>");
        scanf("%s",iitian[i].address);




        printf("Roll>>>>>BSSE");

        scanf("%d",&iitian[i].roll);

        getchar();




       printf("Registration_No>>>>>");
        scanf("%s",iitian[i].du);
         fprintf(ptr,"%s\n%s\n%d\n%s\n",iitian[i].name,iitian[i].address,iitian[i].roll,iitian[i].du);


    }
    fclose(ptr);


    return 0;
}
int view()


{
    printf("\n\n\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^\n") ;
    printf("\t\t\t\t\t*****View_Profile_Site*****\n");
    printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~\n") ;
    FILE *pt;

    char book[1700];
    pt=fopen("Student_information_database.txt","r+");

    fread(book,1700,1,pt);
    fflush(stdout);
 printf("%s",book);
    fclose(pt);

    return 0;
}





int marks_processing()
{
    printf("\n\n\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^\n") ;
    printf("\t\t\t\t\t*****Enter_Marks_Site******\n");
    printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~\n") ;
          FILE *quality;


      printf("Number_of_Students>>>>>>");
      scanf("%d",&sp);

      getchar();
       int  bsse_roll[sp];



       for(rt=0;rt<sp;rt++)
       {

   quality=fopen("Student_marks_database.txt","w");
                    printf("Enter your roll no>>>>>>BSSE");
                    scanf("%d",&bsse_roll[sp]);
                    getchar();

                  fprintf(quality,"Students_roll_no<<<<#BSSE%d\n",bsse_roll[sp]);

                 fclose(quality);
          semester_wise_mark();
       }
    return 0;
}
int marks_processing2()
{



          semester_wise_mark();
    return 0;
}

int  semester_wise_mark()

{

    double current_cgpa[sp];

FILE *quality;

       quality=fopen("Student_marks_database.txt","w");
      int option;
  printf("Enter the semester no:");

                  scanf("%d",&sm_no);
                  getchar();



                  fprintf(quality,"Semester_No<<<<0%d\n",sm_no);



      fclose(quality);
                  if(sm_no==1)

                  {
                      semester01();
                      enter_marks();

                  }
                  else if (sm_no==2)
                  {

                      semester02();
                      enter_marks();
                  }
                  else if(sm_no==3)

                  {
                      semester03();
                      enter_marks();

                  }
                  else if(sm_no==4)

                  {
                      semester04();
                      enter_marks();
                  }
                else if(sm_no==5)

                {
                    semester05();
                    enter_marks();
                }
                else if(sm_no==6)

                {
                    semester06();
                    enter_marks();
                }
                else if(sm_no==7)

                {
                    semester07();
                    intern_marks();
                }
                else if(sm_no==8)

                {
                    semester08();
                    enter_marks();
                }
                else
                    {
                     printf("Thanks for entering Students number\n");
                     return 0;
                    }

                    printf("Press 1 for input next semester number\n");
                    printf("Press 2 for stop to input semester number\n");
                  scanf("%d",&option);

                  if(option==1)
                  {
                    marks_processing2();
                  }

                  else
                    {
        printf("Thanks for entering Students number\n");


}

}

   int semester01()
   {
        strcpy(subject_code[0][0],"SE101");
        strcpy(subject_code[0][1],"SE102");
        strcpy(subject_code[0][2],"SE103");
        strcpy(subject_code[0][3],"SE104");
        strcpy(subject_code[0][4],"SE105");
        strcpy(subject_code[0][5],"SE106");


   }
   int semester02()
   {
       strcpy(subject_code[1][0],"SE201");
       strcpy(subject_code[1][1],"SE202");
       strcpy(subject_code[1][2],"SE203");
       strcpy(subject_code[1][3],"SE204");
       strcpy(subject_code[1][4],"SE205");
       strcpy(subject_code[1][5],"SE206");



   }
   int semester03()
   {
       strcpy(subject_code[2][0],"SE301");
       strcpy(subject_code[2][1],"SE302");
       strcpy(subject_code[2][2],"SE303");
       strcpy(subject_code[2][3],"SE304");
       strcpy(subject_code[2][4],"SE305");
       strcpy(subject_code[2][5],"SE306");


   }
   int semester04()
   {
       strcpy(subject_code[3][0],"SE401");
       strcpy(subject_code[3][1],"SE402");
       strcpy(subject_code[3][2],"SE403");
       strcpy(subject_code[3][3],"SE404");
       strcpy(subject_code[3][4],"SE405");
       strcpy(subject_code[3][5],"SE406");


   }
   int semester05()
   {
       strcpy(subject_code[4][0],"SE501");
       strcpy(subject_code[4][1],"SE502");
       strcpy(subject_code[4][2],"SE503");
       strcpy(subject_code[4][3],"SE504");
       strcpy(subject_code[4][4],"SE505");
       strcpy(subject_code[4][5],"SE506");


   }
   int semester06()
   {
       strcpy(subject_code[5][0],"SE601");
       strcpy(subject_code[5][1],"SE602");
       strcpy(subject_code[5][2],"SE603");
       strcpy(subject_code[5][3],"SE601");
       strcpy(subject_code[5][4],"SE601");
       strcpy(subject_code[5][5],"SE601");


   }
   int semester07()
   {
       strcpy(subject_code[6][0],"SE701");



   }
   int semester08()
   {
       strcpy(subject_code[7][0],"SE801");
       strcpy(subject_code[7][1],"SE802");
       strcpy(subject_code[7][2],"SE803");
       strcpy(subject_code[7][3],"SE804");
       strcpy(subject_code[7][4],"SE805");
       strcpy(subject_code[7][5],"SE806");


   }

int enter_marks()
{

FILE *tecnology;

tecnology=fopen("Student_marks_database.txt","w+");


     int st_wise_marks[sp][8][6];
     sem_cgpa[sm_no-1]=0;
for(i=0;i<6;i++)
{


    printf("The marks of %s:",subject_code[sm_no-1][i]);

    scanf("%d",&sub_marks);
    getchar();
    st_wise_marks[rt][sm_no-1][i]=sub_marks;


   sub_cgpa[i]=cgpa_calculation(sub_marks);

   sem_cgpa[sm_no-1]=sem_cgpa[sm_no-1]+sub_cgpa[i];



}
sem_cgpa[sm_no-1]=sem_cgpa[sm_no-1]*3.0000/18.0000;

  tecnology=fopen("Student_marks_database.txt","a+");
  fprintf(tecnology,"Semester0%d cgpa: %.2f\n",sm_no,sem_cgpa[sm_no-1]);



 fclose(tecnology);



return 0;
}

int intern_marks()
{
    FILE *tecnology;
tecnology=fopen("Student_marks_database.txt","a+");
  fprintf(tecnology,"subject_code\tsubject_marks\tGrade\tC.G.P.A.\n");
     fprintf(tecnology,"============\t=============\t=====\t========\n") ;
    printf("The marks of %s:",subject_code[6][0]);
    scanf("%d",&sub_marks);
    sub_cgpa[0]=cgpa_calculation(sub_marks);

    sem_cgpa[6]=sub_cgpa[0];




    fprintf(tecnology,"Semester07 cgpa: %.2f\n",sem_cgpa[6]);


 fclose(tecnology);


   return 0;

}

double cgpa_calculation(int sub_marks)
{

    double sub_cgpa;
      FILE* velocity;

      velocity=fopen("Student_marks_database.txt","a+");


      if(sub_marks>=80)
      {

          sub_cgpa=4.00;
          fprintf(velocity,"%s\t\t    %d\t\t  A+\t  4.00\n",subject_code[sm_no-1][i],sub_marks);
      }
      else if(sub_marks>=75)

      {

          sub_cgpa=3.75;
          fprintf(velocity,"%s\t\t    %d\t\t  A\t  3.75\n",subject_code[sm_no-1][i],sub_marks);
      }

       else if(sub_marks>=70)

      {
           sub_cgpa=3.50;
          fprintf(velocity,"%s\t\t    %d\t\t  A-\t  3.50\n",subject_code[sm_no-1][i],sub_marks);

      }

       else if(sub_marks>=65)

      {
           sub_cgpa=3.25;
          fprintf(velocity,"%s\t\t    %d\t\t  B+\t  3.25\n",subject_code[sm_no-1][i],sub_marks);

      }

       else if(sub_marks>=60)

      {
           sub_cgpa=3.00;
          fprintf(velocity,"%s\t\t    %d\t\t  B\t  3.00\n",subject_code[sm_no-1][i],sub_marks);

      }

       else if(sub_marks>=55)

      {
           sub_cgpa=2.75;
          fprintf(velocity,"%s\t\t    %d\t\t  B-\t  2.75\n",subject_code[sm_no-1][i],sub_marks);

      }

       else if(sub_marks>=50)

      {
           sub_cgpa=2.50;
          fprintf(velocity,"%s\t\t    %d\t\t  C+\t  2.50\n",subject_code[sm_no-1][i],sub_marks);

      }

       else if(sub_marks>=45)

      {
           sub_cgpa=2.25;
          fprintf(velocity,"%s\t\t    %d\t\t  C\t  2.25\n",subject_code[sm_no-1][i],sub_marks);

      }

       else if(sub_marks>=40)

      {

           sub_cgpa=2.00;
          fprintf(velocity,"%s\t\t    %d\t\t  D\t  2.00\n",subject_code[sm_no-1][i],sub_marks);
      }


    else

        {
             sub_cgpa=0.00;
          fprintf(velocity,"%s\t\t    %d\t\t  F\t  0.00\n",subject_code[sm_no-1][i],sub_marks);


        }

        fclose(velocity);



 return sub_cgpa;


}




int result()


{
    printf("\n\n\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^\n") ;
    printf("\t\t\t\t\t*****View_Marks_Site******\n");
    printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~\n") ;
    FILE *pt;

    char book[20000];
    pt=fopen("Student_marks_database.txt","r");



    fread(book,20000,1,pt);
    printf("%s",book);
    fclose(pt);

    return 0;
}


int search()

{

     printf("\n\n\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^\n") ;
    printf("\t\t\t\t\t*****_____Search______*****\n");
    printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~\n") ;

    int opp;
    printf("\t\t1.Searching by Name\n");
    printf("\t\t2.Searching by roll\n");
    printf("\t\t3.Searching by registration\n");
    printf("\t\t4.return\n");
    printf("\t\tPress Your key>>>>");
    scanf("%d",&opp);
    if(opp==1)
    {

        search1();

    }
    else if(opp==2)
    {

        search2();

    }
   else  if(opp==3)
    {

        search3();

    }
    else if(opp==4)
    {

        return sub_menu();
    }

    else
        {
        printf("!!!!Wrong_key!!!!");
        }

        return 0;

}

int search1()
{
   char Name[54];
    int att;
    printf("Enter_Student_Name>>>>");
    scanf("%s",Name);
    struct number iitian[n];

for(i=0;i<n;i++)
{
     att=strcmp(Name,iitian[i].name);
   if(att==1)
     {
        printf("Name:%s\n",iitian[i].name);
        printf("Address:%s\n",iitian[i].address);
        printf("Roll_No:%d\n",iitian[i].roll);
     printf("Registration_No:%s",iitian[i].du);
     }

}

return 0;


}

int search2()
{
    int Roll;

    printf("Enter_Student_Roll>>>>BSSE");
    scanf("%d",&Roll);
    struct number iitian[n];

for(i=0;i<n;i++)
{
      if(Roll==iitian[i].roll)

     {
        printf("Roll:%s\n",iitian[i].name);
        printf("Address:%s\n",iitian[i].address);
        printf("Roll_No:%d\n",iitian[i].roll);
        printf("Registration_No:%s",iitian[i].du);
     }

}

return 0;

}
int search3()
{
    char DU[54];
    int att;
    printf("Enter_Student_Registration_No>>>>");
    scanf("%s",DU);
    struct number iitian[n];

for(i=0;i<n;i++)
{
     att=strcmp(DU,iitian[i].du);
   if(att==1)
     {
        printf("Name:%s\n",iitian[i].name);
        printf("Address:%s\n",iitian[i].address);
        printf("Roll_No:%d\n",iitian[i].roll);
        printf("Registration_No:%s",iitian[i].du);
     }

}
return 0;


}
