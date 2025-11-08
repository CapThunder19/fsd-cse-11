#include <iostream>
#include <vector>
using namespace std;

int main(){
    
   int m,n;
   cin>>m>>n;
   vector<int> a;
    vector<int> b;
    vector<int> c;
    cout<<"enter first array"<<endl;
    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        a.push_back(x);
    }

    cout<<"enter second array"<<endl;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        b.push_back(x);
    }
    int k = 0;
    int l = 0;
    while(k<m && l<n){
        if(a[k]<b[l]){
            c.push_back(a[k]);
            k++;
        }
        else{
            c.push_back(b[l]);
            l++;
        }
    }
    while(k<m){
        c.push_back(a[k]);
        k++;
    }
    while(l<n){
        c.push_back(b[l]);
        l++;
    }
    cout<<"merged array is"<<endl;
    for(int i=0; i<c.size(); i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;

}