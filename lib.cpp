#include "lib.h"
float funzione(const float numeri[],int n){
    float max=numeri[0];
    for(int i=1;i<n;i++){
        if(numeri[i]>max){
            max=numeri[i];
        }
    }
    return max;
}
