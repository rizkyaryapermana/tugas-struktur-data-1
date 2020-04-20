#include <iostream>

using namespace std;

int main()
{
    cout << "========================" << endl;
    cout << "    PENCARIAN ANGKA     " << endl;
    cout << "========================\n" << endl;

int n, bilangan_dicari, Data[10];
int i;
bool ketemu = true;

    cout << "Masukkan banyak angka : ";
    cin >> n;
    for(int c=0; c<n; c++)
    {
        cout <<"Masukkan angka ke-" <<c<<" = ";
        cin >> Data[c];
    }
    i=0;
    cout <<"\nData yang ingin dicari : ";
    cin >> bilangan_dicari;
    ketemu=0;

    while((i<10)&&(ketemu==0))
    {
        if(Data[i]== bilangan_dicari)
        {
        ketemu=1;
        cout <<"\nAngka "<< bilangan_dicari<<" Ditemukan pada posisi ke "<<i;
        }
        else
        i=i+1;
    }
    if(ketemu)
    cout<<"\n\nData yang dicari ada"<<endl;
    else
    cout<<"\n\nData yang dicari tidak ada"<<endl;
}
