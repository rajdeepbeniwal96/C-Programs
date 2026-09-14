#include <iostream>
using namespace std;

/*
Output for n=4.
1 2 3 4 
5 6 7 8 
9 10 11 12 
13 14 15 16 
*/

int main(){
    
    int row,col;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int count=1;

   for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
   }
