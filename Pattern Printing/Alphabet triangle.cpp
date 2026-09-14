#include <iostream>
using namespace std;

/*
Output for n=4.
A
B B
C C C
D D D D
*/

int main(){
    
    int row;
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<char('A' + row - 1)<<" ";
        }
        cout<<endl;
    }
}