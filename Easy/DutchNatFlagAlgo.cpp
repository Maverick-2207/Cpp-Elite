// we'll be sorting an array here of 1, 2 and 0s!

#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> arr= { 0,0,1,2,1,2,1,2,0,0,0,2,2,1,1};
    int n = arr.size();

    int low =0, mid=0, high = n-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low], arr[mid]);
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
     
    cout<<"the sorted array is :"<<endl; 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }

    return 0;

}