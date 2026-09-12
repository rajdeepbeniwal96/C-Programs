#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int pow;
    cout<<"Enter the power: ";
    cin>>pow;
    int result=1;

    for(int i=1;i<=pow;i++){
        result=result*n;
    }
    cout<<"Result: "<<result<<"\n";
    return 0;
}