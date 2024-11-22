#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool issearch(vector<int>nums,int target,int n){
    int st=0,end=n-1;
    vector<int>ans;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(nums[mid]==target){
             ans.push_back(mid);
        }
        else if(nums[mid]<target){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return false;

}
int main(){
    vector<int>nums(5);
    
    int target = 8;
    int n=nums.size();
   cout<< issearch(nums,target,n);
}