#include <iostream>
using namespace std;
bool ispossible(int *arr,int mid,int n,int m){
    int stcount=1;
    int sum=0;
for(int i=0;i<n;i++){
if(sum+arr[i]>mid){
stcount++;
sum=arr[i];}
else{
sum=sum+arr[i];
}
if(stcount>m||arr[i]>mid){
    return false;
}
}
return true;
}
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int s=0;
    int e=sum;
    int mid=s+(e-s)/2;
    int count=0;
    int ans;
    int prev;
    while(s<e){
        if(ispossible(arr,mid,n,m)){
        e=mid;
        if(count==0){
            count=1;
            ans=mid;
        }
        else{
            if(mid<ans){
                ans=mid;
            }
        }
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
if(m<=n){
cout<<ans<<" ";
}
else{
    cout<<-1;
}
    
}