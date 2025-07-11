#include <iostream>
using namespace std;
void pattern(int n){
    int i, j;
    for (i = 0; i < n; i++) {
        // spaces before stars (skip for last row)
        for (j = 1; j < (n - i); j++) {
            cout << " ";
        }

        // stars
        for (j = 1; j <= (2 * i + 1); j++) {
            cout << "*";
        }

        // no need for spaces after stars; move to new line
        cout << endl;
    }

    //LOWER H 
    for(i=n-1;i>=0;i--){
        //space
        for(j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //stars
        for(j=1;j<=2*i+1;j++){
            cout<<"*";
        }
        
        cout<<endl;
    }


    
}
int main(){
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++){
        int n;
        cin>>n;
        pattern(n);
    }

}