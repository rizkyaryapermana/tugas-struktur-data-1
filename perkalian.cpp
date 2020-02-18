#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char *argv[])
{
   int matA [2] [2]= {4,2,8,10};
   int matB [2] [2]= {5,5,5,5};
   int a,b;
   cout<<"MAtriks A"<<endl;
   for (int i=0; i<2 ;i++){
        for (int a=0; a<2; a++){
            cout<<matA [i] [a] <<" ";
        }
        cout<<endl;
   }
   cout<<"MAtriks B"<<endl;
   for (int i=0; i<2 ;i++){
        for (int a=0; a<2; a++){
            cout<<matB[i] [a] <<" ";
              }
        cout<<endl;
   }
   cout<<"hasil perkalian matriks A dan B "<<endl;
   for (int i=0 ; i<2; i++){
    for (int a=0 ; a<2; a++){
        cout<<matA[i][a] * matB[i][a]<<" ";

    }
    cout<<endl;
   }
    system("pause");
    return 0;
}
