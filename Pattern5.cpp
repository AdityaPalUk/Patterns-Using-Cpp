#include <iostream>
using namespace std;
void pattern(int n){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=i;j>0;j--){
            cout<<j%2;

        }
        cout<<endl;
    }
}
int main(){
    pattern(5);
}