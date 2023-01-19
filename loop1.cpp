#include<iostream>
using namespace std;
int main(){

    int n,i,sum;
    cout<<"enter your no\n";
    cin>>n;
    sum=0;
    i=1;
    while(i<=n){

        sum=sum+i;

        i++;
    }

    cout<<"Sum of n natural no=  "<<sum;

    return 0;
}

OUTPUT
enter your no
10
Sum of n natural no=55
