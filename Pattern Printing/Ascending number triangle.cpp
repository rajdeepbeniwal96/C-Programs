#include <iostream>
using namespace std;

/*
Output for n=4.
1 
1 2 
1 2 3 
1 2 3 4 
*/

int main(){
    
    int row,col;
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}