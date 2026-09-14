#include <iostream>
using namespace std;

/*
Output for n=4.
1 
2 2 
3 3 3 
4 4 4 4 
*/

int main(){
    
    int row,col;
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            cout<<row<<" ";
        }
        cout<<endl;
    }
}