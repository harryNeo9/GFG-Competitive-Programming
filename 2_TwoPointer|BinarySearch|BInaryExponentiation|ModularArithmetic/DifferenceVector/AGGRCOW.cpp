
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

      int t,n; cin>>t>>n;

      vi v(n);
      while(t--){
        loop(i,0,n-1){
           cin>>v[i];
        }
      }
      
       loop(i,0,n-1){
          cout<<v[i]<<" ";
        }
        cout<<endl;
     
     return 0;  

   }