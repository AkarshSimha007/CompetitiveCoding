#include<iostream>
using namespace std;

int focc(int a[],int n,int i, int key){
    if(i==n){
        return -1;
    }

    if(a[i]==key){
        return i;
    }

    return focc(a,n,i+1,key);
}

int locc(int a[],int n,int i,int key){
    if(i==n){
        return -1;
    }

   int restArray=locc(a,n,i+1,key);
   if(restArray!=-1){
       return restArray;
   }
   if(a[i]==key){
       return i;
   }
   return -1;
}

int main(){
    int a[]={4,3,2,5,7,2,3,1,2,9};
    cout<<focc(a,10,0,2)<<endl;
    cout<<locc(a,10,0,2);
}
