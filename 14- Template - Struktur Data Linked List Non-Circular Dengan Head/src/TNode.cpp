#include <iostream>
#include "TNode.hpp"

TNode *head = NULL;

//FUNGSI UNTUK MENGECEK HEAD KOSONG ATAU TIDAK
int isEmpty(){
    if(head == NULL){
        return 1;
    }else{
        return 0;
    }
}

//FUNGSI MEMASUKAN NILAI DARI DEPAN
void insertData(int databaru){
    TNode *baru = new TNode();
    baru->data = databaru;
    baru->next = NULL;
        if(isEmpty() == 1){
            head = baru;
            head->next = NULL;
        }else{
            baru->next = head;
            head = baru;
        }
    std::cout << "Data Masuk" << std::endl;
}

//FUNGSI MEMASUKAN NILAI DARI BELAKANG
void insertData_belakang(int databaru){
    TNode *baru, *bantu;
    baru = new TNode();
    baru->data = databaru;
    baru->next = NULL;
        if(isEmpty() == 1){
            head = baru;
            head->next = NULL;
        }else{
            bantu = head;
            while(bantu->next != NULL){
                bantu = bantu->next;
            }
            bantu->next = baru;
            baru ->next = NULL;
        }
    std::cout << "Data Masuk" << std::endl;
}

//FUNGSI UNTUK MENAMPILKAN DATA DI LINKED LIST
void showList(){
    TNode *bantu;
    bantu = head;
    if(isEmpty() == 0){
        while(bantu != NULL){
            std::cout << bantu->data << " ";
            bantu = bantu->next;
        }
        std::cout << std::endl;
    }else{
        std::cout << "List Kosong" << std::endl;
    }
}

//FUNGSI UNTUK MENGHAPUS NODE DARI DEPAN
void deleteNodedepan(){
    TNode *hapus;
    int angka;
    if(isEmpty() == 0){
        if(head->next != NULL){
            hapus = head;
            angka = hapus->data;
            head = head->next;
            delete hapus;
        }else{
            angka = head->data;
            head = NULL;
        }
        std::cout << "Data terhapus" << std::endl;
    }else{
        std::cout << "List masih Kosong" << std::endl;
    }
}
void deleteNodebelakang(){
    TNode *bantu, *hapus;
    int angka;
    if(isEmpty() == 0){
        if(head->next != NULL){
            bantu = head;
            while(bantu->next->next != NULL){
                bantu = bantu->next;
            }
            hapus = bantu->next;
            bantu->next = NULL;
            delete hapus;
        }else{
            angka = head->data;
            head = NULL;
        }
        std::cout << "Data Terhapus" << std::endl;
    }else{
        std::cout << "List Masih Kosong" << std::endl;
    }
}

void clear(){
    TNode *bantu, *hapus;
    bantu = head;
    while(bantu != NULL){
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = NULL;
    std::cout << "List Terhapus" << std::endl;
}
