#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int last=0 , prev=1 , curr;
    cout<<"Fibonacci series: ";
    for(int i=0;i<n;i++){
        cout<<curr<<" ";
        curr = last + prev;
        last = prev;
        prev = curr;
    }
}