/*
A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).

The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).

How many possible unique paths are there?

Input: m = 3, n = 7
Output: 28

Input: m = 3, n = 3
Output: 6

*/
   #include<bits/stdc++.h>
   using namespace std;

   #define ll              long long int
   #define ld              long double
   #define p               1000000007
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

   vector<ll> fact(20);

    ll power(ll a, ll b, ll m){  //modular exponentiation - O(logn)
     ll ans = 1;
     while(b != 0){
       if(b%2 != 0){
         ans = (ans%m * a%m)%m;
       }
       a = (a%m * a%m)%m;
       b = b/2;
     }
     return ans;
   }

   void precomputeFactorial(){
     fact[0] = 1;
     for(ll i=1; i<=20; i++){
       fact[i] = (fact[i-1] * i);
     }
   }

   ll nCr(ll n, ll r){ // O(1) 
     return(fact[n] /(fact[n-r] * fact[r]));
   }
 
   ll computeUniquePaths(ll m, ll n){
       return (nCr(m+n-2, m-1));  // Or  nCr(m+n-2, n-1)
   }

   int main(){

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        precomputeFactorial();
        int T,m,n;
        cin>>T;
        while(T--){
            cin>>m>>n;
            cout<<computeUniquePaths(m, n)<<endl;
        }

        return 0;  

   }

/*
2
3 7
3 3
-----------
28
6
*/