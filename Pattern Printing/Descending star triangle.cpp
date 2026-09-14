#include <iostream>
using namespace std;

int main() 
{
    int row,col;
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(row = 1 ; row <= n ; row++){

        for(col = n - row + 1 ; col >=1  ; col--){
            cout<<" *"<<" ";
        }
        cout<<"\n";
    }
    return 0;
}