#include <iostream>
using namespace std;    
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int sum=(n*(n+1))/2;
    cout<<"Sum of first "<<n<<" natural numbers is: "<<sum<<"\n";
    return 0;
}