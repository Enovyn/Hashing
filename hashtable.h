#include <iostream>
#include <math.h>

#ifndef HASHTABLE_H
#define HASHTABLE_H

class hashtable{
private:
    int nsize = 11;
    int nmbrs[11] = {0};

public:
    void InsertLinear(int n);
    void InsertQuadratic(int n);
    void InsertDoubleHashing(int n);
    void Print();
};

void hashtable::InsertLinear(int n){
    int z;
    for(int i = 0; i <= nsize; i++){
            z = (n + i) % nsize;
        if(nmbrs[z] == 0){
            nmbrs[z] = n;
            return;
        }
    }
    printf("Error: not enough space");
}

void hashtable::InsertQuadratic(int n){
    int z;
    for(int i = 0; i <= nsize; i++){
            z = (n + i + (3 * (int)(pow(i, 2)))) % nsize;
        if(nmbrs[z] == 0){
            nmbrs[z] = n;
            return;
        }
    }
    printf("Error: not enough space");
}

void hashtable::InsertDoubleHashing(int n){
    int z;
    for(int i = 0; i <= nsize; i++){
            z = (n + i * (1 + (n % 10))) % nsize;
        if(nmbrs[z] == 0){
            nmbrs[z] = n;
            return;
        }
    }
    printf("Error: not enough space");
}

void hashtable::Print(){
 for(int i = 0; i < nsize; i++){
           printf("%d  ", nmbrs[i]);
    }
    printf("\n");
}

#endif // HASHTABLE_H
