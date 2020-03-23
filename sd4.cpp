#include <iostream>
#include <conio.h>
#include <malloc.h>
#include <cstdlib>
using namespace std;

struct node
{
      string maha;
      int nim;
      node* next;
};

node* head;
node* tail;
node* curr;
node* entry;
node* del;
node* bantu;

void inisialisasi()
{
      head = NULL; //Inisialisasi
      tail = NULL; //Inisialisasi
}

void input()
{
      node* baru;
      for(int i=0;i<4;i++) {
      baru = new node;
      cout<<"Masukan Nama Mahasiswa : ";
      cin>>baru->maha;
      cout<<"Masukan NIM Mahasiswa  : ";
      cin>>baru->nim;
      baru->next = NULL;
      if(head == NULL) {
        head = baru;
        head->next = NULL;
      } else {
        bantu = head;
        while(bantu->next != NULL) {
            bantu = bantu->next;
        }
        bantu->next = baru;
      }
    }
}


void hapus()
{
    string d;
    if (head != NULL)
    {
    if(head->next != NULL)
    {
    bantu = head;
    while(bantu->next->next!=NULL)
    {
    bantu = bantu->next;
    }
    del = bantu->next;
    d = del->maha;
    bantu->next = NULL;
    delete del;
    }
    else
    {
    d = head->maha;
    head = NULL;
    }
    cout<<d<<" terhapus";
    }
    else
    cout<<"Masih kosong\n";
}
void cetak()
{
      curr = head;
      if(head == NULL)
            cout<<"\ntidak ada data dalam linked list"<<endl;
      else
      {
            cout<<"Nama Mahasiswa \t NIM \n";
            while(curr!=NULL)
            {
                  cout<<curr->maha<<"\t\t"<<curr->nim<<endl;
                  curr = curr->next;
            }
            cout<<endl;
      }
}

int main()
{
    int nim;
    string mhs;
      inisialisasi();
      input();
      cetak();
      hapus();
      cout<<endl;
      cetak();
      return EXIT_SUCCESS;
}
