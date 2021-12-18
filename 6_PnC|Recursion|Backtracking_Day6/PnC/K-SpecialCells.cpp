
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

   vector<ll> fact(1000005);
   vector<ll> factPower(1000005);

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
     factPower[0] = 1; 
     for(ll i=1; i<=1000000; i++){
       fact[i] = (fact[i-1]%p * i%p)%p;
       factPower[i] = power(fact[i], p-2, p);  //optimization - precomuting factorial to power p-2 modulo p
     }
   }

   ll nCr(ll n, ll r){ // O(1) 
     return(fact[n]%p * factPower[n-r]%p * factPower[r]%p)%p;
   }

   ll computePath(ll r, ll c){
       return (nCr(r+c-2, r-1));
   }

   int main(){

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        precomputeFactorial();

        int T; cin>>T;

        while (T--){
            int N, M, k; 
            ll strength = 0;
            cin>>N>>M>>k;
            int xi, yi, pi;
            while(k--){
                cin>>xi>>yi>>pi; 
                ll path1 = computePath(xi, yi)%p; // (1,1) to (xi,yi)
                ll path2 = computePath(N-xi+1, M-yi+1)%p; // (xi, yi) to (N,M)
                strength = strength%p + (pi * (path1%p *path2%p))%p;    
                
            }
            cout<<strength<<endl;
        }

        return 0;  

   }