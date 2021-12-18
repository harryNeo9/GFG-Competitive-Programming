/* Program to print pyramid pattern in C++ : Pattern 3 */
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

      for(int i=1; i<=5; i++){
        for(int j=5; j>i; j--){
          cout<<"  ";
        }
        for(int k=1; k<=i; k++){
          cout<<"*"<<" ";
        }
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