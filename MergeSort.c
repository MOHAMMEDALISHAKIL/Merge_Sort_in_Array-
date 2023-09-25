# Merge_Sort_in_Array-
#include<stdio.h>
void merge(int a[ ],int low,int mid,int high){
int i=low,k=low,j=mid + 1;
int b[100];
while((i<=mid)&&(j<=high)){
    if(a[i]>a[j]){
        b[k]=a[j];
        k++;
        j++;
        }
    else{
        b[k]=a[i];
        k++;
        i++;
        }
    }
while(i<=mid){
    b[k]=a[i];
    k++;
    i++;
}
while(j<=high){
    b[k]=a[j];
    k++;
    j++;
}
int r = low;
while(r<k){
    a[r]=b[r];
    r++;
        }
    }
