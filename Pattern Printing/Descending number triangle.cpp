#include <iostream>
using namespace std;

/*
Output for n=4.
1 
2 1
3 2 1 
4 3 2 1
*/

int main(){
    
    int row,col;
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(row=1;row<=n;row++){
        for(col=row;col>=1;col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}