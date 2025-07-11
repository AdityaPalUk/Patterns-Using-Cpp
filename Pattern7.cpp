#include <iostream>
using namespace std;
void pattern(int n){
    int i,j,k=1;
    for(i=1;i<n;i++){
        for(j=1;j<=i;j++){
            cout<<k++<<" ";
        }
        cout<<endl;
    }
}
int main(){
    pattern(5);
}