#ifndef __NODE
#define __NODE

struct TNode{
    int data;
    TNode *next;
};

int isEmpty();
void insertData(int);
void insertData_belakang(int);
void showList();
void deleteNodedepan();
void deleteNodebelakang();
void clear();


#endif