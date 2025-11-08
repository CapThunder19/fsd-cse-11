#include <iostream>
using namespace std;

int main(){
    int arr[9]={1,1,3,2,4,4,5,5,6};
    int x = 6 ;
    int DAT[x+1] ={0};

    for(int i = 0; i < 9; i++){
    DAT[arr[i]] += 1;
}

    for(int i = 1; i<=x; i++){
        if (DAT[i] % 2 != 0){
        cout<<i<<" ";}
    }

return 0;
}