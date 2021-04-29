#include <iostream>
#include "TNode.hpp"

using namespace std;

int getOption();


int main(){
    int nilai, n;
    char lanjut;
    enum{PUSH = 1, PUSH2, CLEAR, SHOW, DELETE1, DELETE2, EXIT};

    do{
        int pilihan = getOption();
        switch (pilihan){
            case PUSH:        
                cout << "Jumlah List yang ingin dimasukan : ";
                cin >> n;
                for(int i = 1; i <= n; i++){
                    cout << "Masukan Nilai ke - " << i << " : ";
                    cin >> nilai;
                    insertData(nilai);
                }
            break;

            case PUSH2:
                cout << "Masukan data dari belakang : ";
                cin >> nilai;
                insertData_belakang(nilai);
            break;
            
            case CLEAR:
                clear();
            break;
            
            case SHOW:
                cout << "+++DATA DALAM LINKED LIST+++" << endl;
                showList();
            break;
            
            case DELETE1:
                deleteNodebelakang();
            break;
            
            case DELETE2:
                deleteNodedepan();
            break;
            
        }
        cout << "-----------------------------" << endl;        
        cout << "Lanjutkan ? [y/n]: ";
        cin >> lanjut;
        
    }while(lanjut == 'y');

    return 0;
}

int getOption(){
    int option;
    system("clear");
    cout << "+++POGRAM STRUKTUR DATA LINKED LIST+++" << endl;
    cout << "1.Tambah data didepan list" << endl;
    cout << "2.Tambah data dibelakang list" << endl;
    cout << "3.Menghapus semua list" << endl;
    cout << "4.Tampilkan data" << endl;
    cout << "5.Menghapus data dibelakang list" << endl;
    cout << "6.Menghapus data didepan list" << endl;
    cout << "======================================" << endl;
    cout << "Masukan pilihan : ";
    cin >> option;
    cout << endl;
    return option;
}