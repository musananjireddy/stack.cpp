#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        //stack<int>st;
        unordered_map<int,int>mp;
        stack<int>st;
        //mp[0]=-1;
        for(int i=0;i<nums2.size();i++){
            while(!st.empty() && st.top()<nums2[i]){
                mp[st.top()]=nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }
        while(!st.empty()){
            mp[st.top()]=-1;
            st.pop();
        }
        vector<int>ans;
        for(int x:nums1){
            ans.push_back(mp[x]);
        }
        return ans;
        
    }
};
int main(){
    Solution obj;
    vector<int>nums1={4,1,2};
    vector<int>nums2={1,3,4,2};
    vector<int>ans=obj.nextGreaterElement(nums1,nums2);
    for(int x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
}   