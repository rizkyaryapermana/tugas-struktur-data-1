#include <iostream>

using namespace std;

struct TNode
{
	string data;
	TNode *next;
	TNode *prev; 
}*head;

void inIt()
{
	head = NULL;
}

bool isEmpty()
{
	if(head==NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void insertDepan(string kata)
{
	TNode *baru = new TNode;
	baru->data=kata;
	baru->next=NULL;
	baru->prev=NULL;
	
	if(isEmpty())
	{
		head = baru;
		head->prev=NULL;
		head->next=NULL;
	}
	else 
	{
		head->next=head;
		head->prev=baru;
		head=baru;
	}
}

void insertBelakang(string kata)
{
	TNode *baru=new TNode;
	baru->data=kata;
	baru->next=NULL;
	baru->prev=NULL;
	
	if(isEmpty())
	{
		head=baru;
		head->prev=NULL;
		head->next=NULL;
	}
	else
	{
		TNode *bantu=new TNode;
		bantu=head;
		while(bantu->next!=NULL)
		{
			bantu=bantu->next;
			
		}
		bantu->next=baru;
		bantu->prev=bantu;
	}
}

void hapusDepan()
{
	if(isEmpty())
	{
		cout<<"list kosong";
	}
	else
	{
		if(head->next==NULL)
		{
			cout<<head->data<<"data telah terhapus";
			head=NULL;
		}
		else
		{
			TNode *hapus=new TNode;
			hapus=head;
			head=head->next;
			head->prev=NULL;
			cout<<hapus->data<<"telah terhapus";
			delete (hapus);
		}
	}
}

void hapusBelakang()
{
	if(isEmpty())
	{
		cout<<"list kosong";
	}
	else
	{
		if(head->next==NULL)
		{
			cout<<head->data<<"telah dihapus";
			head=NULL;
		}
		else
		{
			TNode *bantu=new TNode;
			bantu=head;
			while(bantu->next->next!=NULL)
			{
				bantu=bantu->next;
			}
			TNode *hapus=new TNode;
			hapus=bantu->next;
			bantu->next=NULL;
			cout<<hapus->data<<"telah dihapus";
			delete(hapus);
		}
	}
}

void cetak()
{
	if(isEmpty())
	{
		cout<<"list kosong";
	}
	else
	{
		TNode *bantu=new TNode;
		bantu=head;
		while(bantu!=NULL)
		{
			cout<<bantu->data<<"";
			bantu = bantu->next;
		}
	}
}

int main()
{
	int menu;
	inIt();
		while (menu!=6)
		{
			cout<<"\nMENU"<<endl;
			cout<<"1.Insert depan"<<endl;
			cout<<"2.Insert belakang"<<endl;
			cout<<"3.Hapus depan"<<endl;
			cout<<"4.Hapus belakang"<<endl;
			cout<<"5.Tampil"<<endl;
			cout<<"6.Keluar"<<endl;
			cout<<"Masukkan Pilihan Anda : ";
			cin>>menu;
			if(menu==1)
			{
				string input;
				cout<<"Masukkan data : ";
				cin>>input;
				insertDepan(input);
				cout<<input<<"telah dimasukkan";
			}
			else if(menu==2)
			{
				string input;
				cout<<"Masukkan data : ";
				cin>>input;
				insertBelakang(input);
				cout<<input<<"telah dimasukkan";
			}
			else if(menu==3)
			{
				hapusDepan();
			}
			else if(menu==4)
			{
				hapusBelakang();
			}
			else if(menu==5)
			{
				cetak();
			}
			else 
			{
				return false;
			}
		}
}
