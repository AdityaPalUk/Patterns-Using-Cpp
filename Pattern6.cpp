#include <iostream>
using namespace std;
void pattern(int n){
    int i,j;
    for(i=1;i<=n;i++){
        //num
        for(j=1;j<=i;j++){
            cout<<j;
        }

        //space
        for(j=1;j<=(2*n-2*i);j++){
            cout<<" ";
        }

        //num
        for(j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;


    }

    
}
int main(){
    
    
    pattern(5);
}