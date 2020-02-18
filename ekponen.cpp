#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
   int matA [2] [2]= {4,2,8,10};
   //int matB [2] [2]= {-5,8,4,-12};
   int a,b=5;
   cout<<"MAtriks A"<<endl;
   for (int i=0; i<2 ;i++){
        for (int a=0; a<2; a++){
            cout<<matA [i] [a] <<" ";
        }
        cout<<endl;
   }
   /*cout<<"MAtriks B"<<endl;
   for (int i=0; i<2 ;i++){
        for (int a=0; a<2; a++){
            cout<<matB[i] [a] <<" ";
              }
        cout<<endl;
   }*/

   cout<<"hasil perkalian matriks A dengan eksponen 5";
   for (int i=0 ; i<2; i++){
    for (int a=0 ; a<2; a++){
            //cout<<matA[i][a]; exp(b)<<" ";
        cout<<pow(matA[i][a],5)<<" ";

    }
    cout<<endl;
   }
    system("pause");
    return 0;
}
