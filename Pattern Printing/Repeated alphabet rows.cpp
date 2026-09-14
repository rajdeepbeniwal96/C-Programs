#include<iostream>
using namespace std;

/*
A A A . . n
B B B . . n
C C C . . n
. . . . . n
. . . . . n
til n times
*/

int main(){
    char row;
    char col;
    int n;
    cout<<"Enter the alphabets till u want to print the pattern: ";
    cin>>n;

    for(row='A';row<=char(n+64);row++){
        for(col=1;col<=n;col++){
            cout<<row<<" "; //Explicit type conversion.
            //for small alphabets use char(col+96).
        }
        cout<<endl;
    }   
    return 0;
}