#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int s,int e){
   int pivot = arr[s];
   int count = 0;
    for(int i=s+1;i<=e;i++){
         if(arr[i]<=pivot){
              count++;
         }
    }

    int position = s+count;
    swap(arr[s],arr[position]);
    int i=s;
    int j=e;
    while(i<s+count && j>s+count){
        if(arr[i]<=pivot){
            i++;
        }
        else if(arr[j]>=pivot){
            j--;
        }
        else if(arr[i]>pivot && arr[j]<pivot){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    // place pivot at right position
  
   return position;

}

void quickSort(int (&arr)[5],int s,int e){
    // base condition 
    if(s>=e){
        return;
    }

    int p = partition(arr,s,e);

    // recursive call
    quickSort(arr,s,p-1); // left part
    quickSort(arr,p+1,e); // right part
}

int main(){

int arr[5]={6,5,4,3,2};
int n=5;
int s=0;
int e=n-1;

quickSort(arr,s,e);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
            

return 0;
}