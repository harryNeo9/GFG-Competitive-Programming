/* Program to print pyramid pattern in C++ : Pattern 5 */
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

        int t=0;
      for(int i=1; i<=5; i++){
          for(int k=t; k<5; k++){
              cout<<" ";
          }
          for(int j=0; j<i; j++){
              cout<<"* ";
          }
          t++;
          cout<<endl;
      }
     
     return 0;  

   }

/*

     * 
    * * 
   * * * 
  * * * * 
 * * * * * 


*/