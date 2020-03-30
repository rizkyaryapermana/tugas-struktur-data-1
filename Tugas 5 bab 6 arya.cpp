#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream>
#include <string>
#define MaxElemen 200

using namespace std;

struct Tumpukan
{
 char Isi[MaxElemen];
   int Atas;
} T;

void PUSH (char x){
if(T.Atas == MaxElemen){
 cout<<"Tumpukan Sudah Penuh";
 getch();
}
else{
 T.Atas = T.Atas + 1;
 T.Isi[T.Atas] = x;
}
}

char POP(){
 char hasil;
 if(T.Atas == 0){
    cout<<"Tumpukan sudah kosong";
      hasil = ' ';
   }
   else{
    hasil = T.Isi[T.Atas];
      T.Atas = T.Atas - 1;
   }
   return hasil;
}


int main()
{
     int I,jumlah,belakang;
     char Kalimat[MaxElemen];
     bool palindrome=true;

     T.Atas =0;
     cout<<"Aplikasi Stack untuk Membalik kalimat\n";
     cout<<"----------------------------------------\n\n";


     cout<<"Masukkan sembarang kalimat : ";
     cin.getline(Kalimat,sizeof(Kalimat));
     cout<<"Kalimat Asli : "<<Kalimat;

     jumlah=strlen(Kalimat);
     belakang=jumlah-1;
     cout<<endl<<"jumlah kata= "<<jumlah<<endl;


     for(I=0;I<strlen(Kalimat);I++)
     {
      PUSH(Kalimat[I]);
      }

      cout<<"Kalimat Setelah di Balik : ";

      for (I=0;I<strlen(Kalimat);I++)
      {
       cout<<""<<POP();
      }

      for (int a=0;a<jumlah;a++)
      {
          if((char)tolower(Kalimat[a])!=(char)tolower(Kalimat[belakang]))
            palindrome=false;
          break;
      }
            if (palindrome)
                cout<<"palindrome";
            else
                cout<<"\nbukan palindrome";
            return 0;
       getch();
    }

