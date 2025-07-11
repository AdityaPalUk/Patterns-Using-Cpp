#include <iostream>
using namespace std;
void pattern(int n){
    int i,j;
    for(i=n;i>0;i--){
        for(j=i;j<=n;j++){
            cout<<char(j+64)<<" ";
        }
        cout<<endl;
    }
}
int main(){
    pattern(5);
}