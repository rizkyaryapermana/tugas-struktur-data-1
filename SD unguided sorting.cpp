#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

main(){
    int i, j, a, k, m;
    char nm[5][20], temp[40];

    cout<<"Inputkan 5 Nama\n";

    for (i=1;i<=5;i++)
     { cout<<"Input nama ke-"<<i<<" = ";gets(nm[i]);
       if (i>1)
        { for (j=1;j<=(i-1);j++)
           { a=(strcmp(nm[i], nm[j]));
               if (a<=0)
                { strcpy (temp, nm[i]);
                  for (k=(i-1);k>=j;k--)
                   { m=(k+1);
                     strcpy (nm[m], nm[k]);
                   }
                  strcpy (nm[j], temp);
                }
           }
        }
      }
    cout<<"\nHasil pengurutannya adalah : \n";
    for (i=1;i<=5;i++)
     { cout<<"\n"<<nm[i];}
return 0;
}
