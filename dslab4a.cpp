#include<iostream>
using namespace std;
int power(int a, int n){
    if(n==0){
        return 1;
    }
    else{
        return a*power(a,n-1);
    }
}
int main(){
    int a,n,c;
    cout<<"Enter a non zero integer A and non negative intger for power N: "<<endl;
    cin>>a>>n;
    c = power(a,n);
    cout<<"The A to the power N is "<<c<<endl;
    return 0;
}