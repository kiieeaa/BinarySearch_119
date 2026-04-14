#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void input()
{
    while (true)
    {
        cout << "masukan banyaknya element pada array (maksimal 10): ";
        cin >> nPanjang;

        if (nPanjang <= 10)
        {
            break;
        
        }
        else
        {
            cout << "\n[!] jumlah element tidak boleh lebih dari 10. silahkan coba lagi.\n\n";      
        }
    }

    cout << "\n==================\n";
    cout << " masukan element array \n";
    cout << "==================\n";
    

        
            
       
    }
