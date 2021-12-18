
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

     int n,q;
     cin>>n;
     vi arr(n);
     for(int i=0; i<n; i++){
         cin>>arr[i];
     }
     cin>>q;
     int l,r,k;
     vi diff_vec(n,0);
     while(q--){
         cin>>l>>r>>k;
         diff_vec[l]+=k;
         if(r+1<n) diff_vec[r+1]-=k;
     }
    
    //  for(auto x: diff_vec)
    //     cout<<x<<" ";
    // cout<<endl;

     for(int i=1;i<n;i++){
         diff_vec[i]+=diff_vec[i-1];
     }
 
     for(int i=0; i<n; i++){
         arr[i]+=diff_vec[i];
     }
     for(auto x: arr)
        cout<<x<<" ";
    cout<<endl;
     
     return 0;  

   }

/*
6 
2 3 2 1 0 5
3
2 5 3
0 4 2
3 4 5

4 5 7 11 10 8 

*/