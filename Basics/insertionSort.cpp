#include <stdio.h>
#include<iostream>
using namespace std;


void insertionSort(int *a,int n){
    for(int i=1;i<n;i++){
        int key=a[i];
        int j=i-1;
        while(j>=0&&a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main()
{
    int a[]={2,4,7,10,23,29,56,34};
    insertionSort(a,8);
    return 0;
}
