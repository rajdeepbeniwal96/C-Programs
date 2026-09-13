#include<iostream>
using namespace std;

/*
A B C . . n
A B C . . n
A B C . . n
. . . . . n
. . . . . n
til n times
*/

int main(){
    int row,col;
    int n;
    cout<<"Enter the alphabets till u want to print the pattern: ";
    cin>>n;

    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            cout<<char(col+64)<<" "; //Explicit type conversion.
            //for small alphabets use char(col+96).
        }
        cout<<endl;
    }   
    return 0;
}