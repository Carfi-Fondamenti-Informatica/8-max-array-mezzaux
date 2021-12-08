#include "lib.h"
int funzione(const int numeri[],int n){
    int max=numeri[0];
    for(int i=1;i<n;i++){
        if(numeri[i]>max){
            max=numeri[i];
        }
    }
    return max;
}
