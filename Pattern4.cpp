#include <iostream>
using namespace std;
void pattern(int n){
    int i,j;

    //upper half
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //lower half
    for(i=0;i<n;i++){
        for(j=n-1;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    pattern(5);
}