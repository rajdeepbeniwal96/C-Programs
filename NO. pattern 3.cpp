#include <iostream>
using namespace std;

/*
n n-1 n-2 . . 1
n n-1 n-2 . . 1
. . . . . . . . 
. . . . . . . .
n n-1 n-2 . . 1 

*/

int main(){
    int row,col;
    int n;
    cout<<"Enter the number til u want to print the pattern: ";
    cin>>n;

    for(row=1;row<=n;row++){
        for(col=n;col>=1;col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}