#include<iostream>
using namespace std;

int updateBit(int n,int pos,int value){
    int mask = ~(1<<pos);
    n=n&mask;
    return (n|(value<<pos));
}

int main(){
    cout<<updateBit(7,1,0);
    return 0;
}