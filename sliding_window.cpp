
// Longest sub_string with k unique characters 

/*
#include<bits/stdc++.h>
using namespace std;

int main(){

string s;
cin>>s;
int k;
cin>>k;

int i=0;
int count=0;

unordered_map<char,int>mp;

for(int j=0;j<s.length();j++){
   mp[s[j]]++;

if(k==mp.size()){
    count=max(count,j-i+1);
}

else if(k<mp.size()){
    while(k<mp.size()){
        mp[s[i]]--;
        if(mp[s[i]]==0) mp.erase(s[i]);
    i++;
    }
}
 

}
cout<<count<<endl;
    return 0;
}

*/






//Minimum swaps and K together 
/*
#include<bits/stdc++.h>
using namespace std;

int main(){


int n,k;
cin>>n>>k;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}


int p=0,count=0, ans=0;
for(int i=0;i<n;i++){
    if(arr[i]<=k)count++;
}

for(int j=0;j<count;j++){
    if(arr[j]>k)ans++;
}

int res=ans;

for(int j=count;j<n;j++){
    
    if(arr[j]>k)ans++;
    if(arr[p]>k)ans--;
    
p++;

res=min(res,ans);
}

cout<<res<<endl;


  return 0;
}


*/







/*
//Sliding Window Maximum
#include<bits/stdc++.h>
using namespace std;

int main(){

int n,k;
cin>>n>>k;
vector<int>nums(n);

for(int i=0;i<n;i++){
    cin>>nums[i];
}


 vector<int>v;
        
        deque<int>q(k);
        int i;
    for(i=0;i<k;i++){
       
        while(!q.empty() && nums[i]>=nums[q.back()])
            q.pop_back();
        
        q.push_back(i);
    }
        
    for(;i<nums.size();i++){
       v.push_back(nums[q.front()]);
        
        while(!q.empty() && q.front()<=i-k)
            q.pop_front();
        
    while(!q.empty() && nums[i]>=nums[q.back()])
        q.pop_back();
        
        q.push_back(i);
        
        
        
    }
        
     v.push_back(nums[q.front()]);   
        
     for(int i=0;i<v.size();i++){
         cout<<v[i]<<" ";
     }

      return 0;

}

*/






/*
//Longest Repeating Character Replacement
#include<bits/stdc++.h>
using namespace std;

int main(){

string s;
cin>>s;
int k;
cin>>k;

 map<char,int>mp;
        int i=0,j=0,f=0,ans=0;
        
        while(j<s.length()){
            
            mp[s[j]]++;
            
            f=max(f,mp[s[j]]);
            
        if((j-i+1)-f > k){
            mp[s[i]]--;
            i++;
        }
            
            ans=max(ans,j-i+1);
            
            j++;
        }
        
    cout<<ans<<endl;

    return 0;

}


*/










#include <bits/stdc++.h>
using namespace std;

int main() {

int t;
while(t--){
  int n;
  cin>>n;
  
 int arr[n];
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }
 
 sort(arr,arr+n);
 int low=arr[0];
 int high=arr[n-1];
 cout<<(high-low)<<endl;
    
    
}


	return 0;
}





