#include <iostream>
using namespace std;
void pattern(int n){
    int i,j;
    for(i=n-1;i>=0;i--){
        //space
        for(j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //stars
        for(j=0;j<2*i+1;j++){
            cout<<"*";
        }
        
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    pattern(n);
    

}