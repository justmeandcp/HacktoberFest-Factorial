//Find factorial of a number 

#include <bits/stdc++.h>
using namespace std;
vector<int> factorial(int N){
    vector<int> ans(1,1);
    for(int i=2;i<=N;i++)
    {
        int rem=0;
       for(int j=0;j<ans.size();j++)
       {
          rem=rem+(i*ans[j]);
          ans[j]=rem%10;
          rem=rem/10;
       }
       while(rem)
       {
           ans.push_back(rem%10);
           rem/=10;
       }
    }
    reverse(ans.begin(),ans.end());
    return ans;
    }
int main() {    

int n;
cin>>n;
vector<int> q=factorial(n);
    for(int x:q)
        cout<<x;

    

    
   
    return 0;
}
