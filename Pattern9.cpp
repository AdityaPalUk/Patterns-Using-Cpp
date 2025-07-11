#include <iostream>
using namespace std;
void pattern(int n){
    int i,j;
    
    for(i=0;i<n;i++){
        //space

        for(j=0;j<n-i-1;j++){
            cout<<" ";
        }

        //alpha
        for(j=0;j<=i;j++){
            cout<<char(j+65);
        }


        for(j=i;j>0;j--){
            cout<<char(j+64);
        }
       
        cout<<endl;
    }
    
    
}
int main(){
    
    
    pattern(5);
}