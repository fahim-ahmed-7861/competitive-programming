#include<bits/stdc++.h>
#define ll long long
#define debug(a) cout<<a<<endl
#define pii pair<int,int>
//usar double sempre ou long double
//pensar em casos que coisas dao negativas
using namespace std;
int main()
{
 ios::sync_with_stdio(false);
 cin.tie(0);
 int n,k;
 vector<int> nums;
 cin>>n>>k;
 int x=n,d=0;
 while(x>=1){
       if(x%2==1 || x==1)nums.push_back(pow(2,d));
       x/=2;
       d++;
 }
 if(nums.size()>k){
        cout<<"NO"<<endl;
        return 0;
 }
 if(nums.size()==k){
    cout<<"YES"<<endl;
    for(auto e:nums)cout<<e<<" ";
    return 0;
 }
 else{
    for(int i=0;i<nums.size() && nums.size()<k;i++){
        if(nums[i]%2==0){
            nums.push_back(nums[i]/2);
            nums.push_back(nums[i]/2);
            nums.erase(nums.begin()+i);
            i--;
        }
    }
 }
 if(nums.size()==k){
    cout<<"YES"<<endl;
    for(auto e: nums){
        cout<<e<<" ";
 }
 }
 else cout<<"NO"<<endl;
 return 0;
}
