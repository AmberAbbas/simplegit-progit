#include<iostream>
using namespace std;

namespace ns1{int value(){
    return 5;
}}

namespace ns2{
    int x=10;
    int value(){
        return -5;
    }
}

int main(){
    cout<<ns1::value()<<"\n";
    cout<<ns2::value()<<"\n";
    cout<<ns2::x<<"\n";


    return 0;
}