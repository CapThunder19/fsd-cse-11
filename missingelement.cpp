#include <iostream>
using namespace std;

int main(){
    int arr[9]={1,2,3,4,5,7,8,9,10};
    int x = 10;
    int DAT[x+1] ={0};

    for(int i = 0; i < 9; i++){
    DAT[arr[i]] = 1;
}

    for(int i = 1; i<=x; i++){
        if (DAT[i] == 0){
        cout<<i<<endl;}
    }

return 0;
}