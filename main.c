
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()

{


    menu();
    view();

    profile();


return 0;
}
int menu()
{
    char c;
    printf("Enter your choice:\n");

    printf("1.For Profiling:(PRESS 'p')\n");
    printf("2.For Viewing:(PRESS 'v')\n");
  //  printf("1.For  Marks:(PRESS 'm')");
  //  printf("1.For Result :(PRESS 'r')");
  //  scanf("%c\n",&c);

    switch(c)
    {
    case 'p' :

        profile();
        break;

    case 'v' :

        view();
        break;

 //   case 'm' :

    //    marks();
    //    break;

  //  case 'r' :

  //      result();
  //      break;





    default:

        printf("Sorry!You press wrong key");

    }

    return 0;

}
void profile()
        {
            int i;
            struct student {

                            char name[20];
                            char address[80];
                            char roll[8];
                            int registration ;

                            } iitian[3];

         for(i=0;i<3;i++)
         {

            gets(iitian[i].name);
             gets(iitian[i].address);
             gets(iitian[i].roll);
             scanf("%d\n",&iitian[i].registration);

         }

        }

        int view()

{


    int i;
            struct student {

                            char name[20];
                            char address[80];
                            char roll[8];
                            int registration ;

                            } iitian[3];

         for(i=0;i<3;i++)
         {

            printf("%s\n",iitian[i].name);
            printf("%s\n",iitian[i].address);
          printf("%s\n",iitian[i].roll);
             printf("%d\n",&iitian[i].registration);

         }

         return 0;
}


