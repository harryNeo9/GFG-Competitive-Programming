/*
Given an array and a sum(>=0), find the loswest possible value of k such that
on division of individual elements by k, the summation of entire array 
is less than or equal to the sum
*/


   #include<bits/stdc++.h>
   using namespace std;

   #define ll              long long int
   #define ld              long double
   #define mod             1000000007
   #define inf             1e18
   #define endl            "\n"
   #define pb              emplace_back
   #define vi              vector<int>
   #define vll             vector<ll>
   #define vs              vector<string>
   #define pii             pair<int,int>
   #define pll             pair<ll, ll>
   #define ump             unordered_map
   #define mp              map
   #define pq_max          priority_queue<ll>
   #define pq_min          priority_queue<ll, vll, greater<ll> >
   #define ff              first
   #define ss              second
   #define mid(l,r)        (l+(r-l)/2)
   #define loop(i,a,b)     for(int i=(a);i<=(b);i++)
   #define looprev(i,a,b)  for(int i=(a);i>=(b);i--)

   int main(){

      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

      int n,sum;
      cin>>n;
      vi arr(n);

      for(int i=0; i<n; i++)
        cin>>arr[i];

        cin>>sum;
        int k = *max_element(arr.begin(), arr.end())+1;
        int l=0, h=k;
        while(l <= h){
       
            int mid = l+(h-l)/2;
            int arrsum=0;
 
            for(int i=0; i<n; i++)
                arrsum += arr[i]/mid;

            if(arrsum <= sum){
                k = mid;
                h = mid-1;
            }else
                l = mid+1;
            
        }

        cout<<k<<endl;
     return 0;  

   }