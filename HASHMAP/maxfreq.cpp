#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    int arr[7]={1,2,2,2,2,1,2};
    unordered_map<int,int> count;
    for(int i=0;i<7;i++){
        count[arr[i]]++;
    }

    int maxi = INT_MIN;
    int ans= -1;
    for(auto i:count){
        if(i.second>maxi){
            maxi = i.second;
            ans = i.first;
        }
    }

    cout<<ans<<" ";
    return 0;
}