#include <stdio.h>
#include<iostream>
using namespace std;

void merge(int a[],int l,int m,int r){
    int n1=m-l+1;
    int n2=r-m;
    int left[n1],right[n2];
    
    for(int i=0;i<n1;i++){
        left[i]=a[l+i];
    }
    for(int j=0;j<n2;j++){
        right[j]=a[m+j+1];
    }
    
    int i=0,j=0,k=l;
    
    while(i<n1 && j<n2){
        if(left[i]<right[j]){
            a[k]=left[i];
            k++;
            i++;
        }
        else{
            a[k]=right[j];
            k++;
            j++;
        }
    }
    
    while(i<n1){
        a[k]=left[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=right[j];
        j++;
        k++;
    }
   
}

void mergeSort(int a[],int l,int r){
    if(r>l){
        int m=l+(r-l)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        merge(a,l,m,r);
    }
}

void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
}

int main()
{
    int a[]={10,5,30,15,7};
    int arr_size = sizeof(a) / sizeof(a[0]);
    printArray(a,arr_size);
    cout<<endl;
    mergeSort(a,0,arr_size);
    printArray(a,arr_size);
    return 0;
}
