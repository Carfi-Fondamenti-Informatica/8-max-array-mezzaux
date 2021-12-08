#include <iostream>
#include "lib.h"
int main(){
    using namespace std;
    int n=0;
    cin>> n;
    float numeri[n];
    int i=0;
    for(i;i<n;i++){
        cin>>numeri[i];
    }
    cout<<funzione(numeri,n);

    return 0;
}
