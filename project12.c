
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()

{


    menu();

    return 0;
}
int menu()
{
    char c;
    printf("Enter your choice:\n");

    printf("1.For Profiling:(PRESS 'p')\n");
    printf("2.For Viewing:(PRESS 'v')\n");

    scanf("%s",&c) ;

    if(c=='p')
    {

        profile();


    }

 else if(c=='v')
    {

        printf("This system will be processing") ;

    }

    else
        {
            printf("Sorry you press wrong key");

    }







    return 0;
}




int profile()
{
    FILE*ptr;

    int i=0;
    struct student
    {


        char name[21];
        char address[80];
        char roll[9];
         char  du[8];
         char d[24];
         char j[23]

    } iitian[3];
         ptr=fopen("rakib.txt","w");
    printf("iitian[i].name\n");
    printf("iitian[i].address\n");
    printf("iitian[i].roll\n");
    printf("iitian[i].registration\n");



        printf("\niitian details\n\n");


        fgets(iitian[i].name,21,stdin);
  fgets(iitian[i].d,21,stdin);
        fgets(iitian[i].address,80,stdin);
         fgets(iitian[i].j,21,stdin);
        fgets(iitian[i].roll,9,stdin);
        fgets(iitian[i].du,9,stdin);


        fprintf(ptr,"%s",iitian[i].name);
         fprintf(ptr,"%s",iitian[i].d);
        fprintf(ptr,"%s",iitian[i].address);
         fprintf(ptr,"%s",iitian[i].j);
        fprintf(ptr,"%s",iitian[i].roll);
        fprintf(ptr,"%s",iitian[i].du);



    return 0;
}

