#include <iostream>

using namespace std;

int main()
{

    int n, i, factorial=1;
    cin>>n;

    cout<<n<<"! = ";
    for(i=n;i>=2;i--){
        factorial*=i;
        cout<<i<<"*";
    }
    cout<<"1 = "<<factorial<<endl;
    return 0;
}
