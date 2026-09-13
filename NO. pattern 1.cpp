#include <iostream>
using namespace std;
/*
1 1 1 1 . . n
2 2 2 2 . . n
3 3 3 3 . . n
4 4 4 4 . . n
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
            cout<<row<<" ";
        }
        cout<<endl;
    }
    return 0;
}