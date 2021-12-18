/* Program to print pyramid pattern in C++ : Pattern 8 */
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

      int r;
      cin>>r;
      cout<<"The number of rows: "<<r<<endl;

      for(int i=1; i<=r; i++){
          for(int j=r; j>i; j--){
              cout<<"  ";
          }
          int n=2*i-1;
          for(int k=1; k<=n; k++){
              cout<<k<<" ";
          }
          cout<<endl;
      }

     
     return 0;  

   }

/*

The number of rows: 5
        1 
      1 2 3 
    1 2 3 4 5 
  1 2 3 4 5 6 7 
1 2 3 4 5 6 7 8 9 

*/