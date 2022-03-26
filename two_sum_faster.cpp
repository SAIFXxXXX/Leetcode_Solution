#include<bits/stdc++.h>
using namespace std;

vector<int>twoSum(vector<int>&nums,int target){
	int i=0;
	map<int,int>m;
	vector<int>ans;
	for(int i=0;i<nums.size();i++){
		if(m.find(nums[i])!=m.end()){
			ans.push_back(m[nums[i]]);
			ans.push_back(i);
			break;
		}
		m.insert({target-nums[i],i});
	}
	return ans;
}

int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(auto&x:v)cin>>x;
	int trgt;
	cin>>trgt;
	vector<int>ans=twoSum(v,trgt);
	for(auto x:ans)cout<<x<<" ";
}

