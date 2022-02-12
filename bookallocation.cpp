#include<iostream>
using namespace std;

int isPossible(int arr[],int n,int m ,int mid){
    int studentcount=1;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        if(sum+arr[i]<=mid){
            sum+=arr[i];
        }
        else{
            studentcount++;
            if(studentcount>m || arr[i]>mid){
                return 0;
            }
            sum=0;
            sum+=arr[i];


        }
    }
    return 1;
    
}


int allocate(int arr[], int n, int m){
    int s=0;
    int e=0;
    for (int i = 0; i < n; i++)
    {
        e=e+arr[i];
    }
    int j=e;
    int ans=-1;
    
    while(s<=j){
        int mid=(s+j)/2;
        if(isPossible(arr,n,m,mid)==1){
            ans=mid;
            j=mid-1;
        }
        else{
            s=mid+1;
        }
        
    }
    return ans;
}



int main(){
    int arr[1000]={10,20,40,50};
    int m=2;
    cout<<allocate(arr, 4,2);


    return 0;
}