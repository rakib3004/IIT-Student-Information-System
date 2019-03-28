
#include "header.h"
profile()
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
