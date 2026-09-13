#include <iostream>
using namespace std;

/*
1 2 3 4 . . n
1 2 3 4 . . n
1 2 3 4 . . n
1 2 3 4 . . n
. . . . . . n
. . . . . . n
till n times
*/ 


int main(){
    int row,col;
    int n;
    cout<<"Enter the number til u want to print the pattern: ";
    cin>>n;

    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}