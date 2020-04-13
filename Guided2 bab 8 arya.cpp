#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>

using namespace std;

typedef struct TNode
{
	int data;
	TNode *next;
	TNode *prev;
};

TNode *head, *baru, *bantu, *hapus;

void init()
{
	head=NULL;
}

int isEmpty()
{
	if(head==NULL)
	return 1;
	else
	return 0;
}

void insertDepan(int databaru)
{
	TNode *baru, *bantu;
	baru=new TNode;
	baru->data=databaru;
	baru->next=baru;
	baru->prev=baru;
	
	if(isEmpty()==1)
	{
		head=baru;
		head->next=head;
		head->prev=head;
	}
	else
	{
		bantu=head->prev;
		baru->next=head;
		head->prev=baru;
		head=baru;
		head->prev=bantu;
		bantu->next=head;
	}
	cout<<"data masuk";
}

void insertBelakang(int databaru)
{
	TNode *baru;
	baru=new TNode;
	baru->data=databaru;
	baru->next=baru;
	baru->prev=baru;
	
	if(isEmpty()==1)
	{
		head=baru;
		head->next=head;
		head->prev=head;
	}
	else
	{
		bantu=head->prev;
		bantu->next=baru;
		baru->prev=bantu;
		baru->next=head;
		head->prev=baru;
	}
	cout<<"data masuk";
}

void tampil()
{
	TNode *bantu;
	bantu=head;
	if(isEmpty()==0)
	{
		do
		{
			cout<<bantu->data<<"  ";
			bantu=bantu->next;
		}
		while (bantu!=head);
		cout<<endl;	
	}
	else
	cout<<"data masih kosong";
}

void hapusDepan()
{
	TNode *hapus, *bantu;
	int d;
	if(isEmpty()==0)
	{
		if(head->next!=head)
		{
			hapus = head;
			d = hapus->data;
			bantu=head->prev;
			head=head->next;
			bantu->next=head;
			head->prev=bantu;
			delete hapus;
		}
		else
		{
			d = head->data;
			head = NULL;
		}
		cout<<d<<"data terhapus\n";
	}
	else
	cout<<"data masih kosong";
}

void hapusBelakang()
{
	TNode *hapus, *bantu;
	int d;
	if(isEmpty()==0)
	{
		if(head->next!=head)
		{
			bantu = head;
			while (bantu->next->next!=head)
			{
				bantu=bantu->next;
			}
			hapus=bantu->next;
			d = hapus->data;
			bantu->next=head;
			delete hapus;
		}
		else 
		{
			d = head->data;
			head = NULL;
		}
		cout<<d<<"data terhapus\n";
	}
	else 
	cout<<"data masih kosong";
}

void clear()
{
	TNode *bantu, *hapus;
	if (isEmpty()==0)
	{
		bantu=head;
		while(bantu->next!=head)
		{
			hapus=bantu;
			bantu=bantu->next;
			delete hapus;
		}
		head = NULL; 
	}
	cout<<"data sudah clear\n";
}

int main()
{
	int pil;
	int data;
	
	while(1)
	{
		cout<<"MENU"<<endl;
		cout<<"1.Insert depan"<<endl;
		cout<<"2.Insert belakang"<<endl;
		cout<<"3.Tampilkan data"<<endl;
		cout<<"4.Hapus depan"<<endl;
		cout<<"5.Hapus belakang"<<endl;
		cout<<"6.Clear data"<<endl;
		cout<<"7.Keluar"<<endl;
		cout<<"Masukkan Pilihan Anda : ";
		cin>>pil;
		
		switch(pil)
		{
		case 1:
			cout<<"\nMasukkan data : ";
			insertDepan(data);
			break;
		case 2:
			cout<<"\nMasukkan data : ";
			insertBelakang(data);
			break;
		case 3:
			cout<<"\nIsi Linked List";
			tampil();
			break;
		case 4:
			hapusDepan();
			break;
		case 5:
			hapusBelakang();
			break;
		case 6:
			clear();
			break;
		case 7:
			cout<<"terima kasih telah menggunakan program ini";
		getch();
		exit(0);
		default :
			cout<<"pilihan tidak ada"<<endl;
		}	
	}
	return 0;
}
