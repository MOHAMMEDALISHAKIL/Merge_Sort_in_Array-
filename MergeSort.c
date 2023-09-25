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
void mergesort(int a[], int low,int high){
int mid;
if(low<high){
    mid =(high+low)/2;
    mergesort(a, low,mid);
    mergesort(a, mid+1,high);
    merge(a,low,mid, high);
        }
    }
main(){
int a[100],n,i;
printf("enter array size: ");
scanf("%d",&n);
printf("enter element: ");
for(i=0; i<n; i++)
    scanf("%d", &a[i]);
    mergesort(a,0,n-1);
    printf("sort array are:");
    for(i=0;i<n;i++)
        printf(" %d",a[i]);
}
