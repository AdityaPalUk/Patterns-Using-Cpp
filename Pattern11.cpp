#include <iostream>
using namespace std;
void pattern(int n){
    int i,j;
    //upper half
    int inis=8;
    for(i=0;i<n;i++){
        //star
        for(j=0;j<=i;j++){
            cout<<"*";
        }

        //space
        for(j=0;j<inis;j++){
            cout<<" ";
        }

        for(j=0;j<=i;j++){
            cout<<"*";
        }
        inis-=2;
        cout<<endl;


    }

    //lower half
    inis=0;
    for(i=0;i<n;i++){
        //stars
        for(j=1;j<=n-i;j++){
            cout<<"*";
        }

        //space 
        for(j=0;j<inis;j++){
            cout<<" ";
        }

        //stars
        for(j=1;j<=n-i;j++){
            cout<<"*";
        }

        inis+=2;
        cout<<endl;
    }
    
}
int main(){
    pattern(5);
}