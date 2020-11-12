#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkPy(int x,int y,int z){
    int a,b,c;
    a=max(x,max(y,z));
    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else if(a==z){
        b=x;
        c=y;
    }

    if(a*a==b*b+c*c)
    return true;
    return false;



}


int main(){
    int x,y,z;
    cin>>x>>y>>z;

    bool res=checkPy(x,y,z);

    if(res){
        cout<<"Pythagorean Triplet"<<endl;
    }
    else cout<<"Not a Triplet"<<endl;
}