/*
Algorithmic Technique = Prefix sum array

You are given a list of N numbers and Q queries. Each query is specified by two numbers i and j; the answer to each query is the sum of every number between the range [i, j] (inclusive).

Note: the query ranges are specified using 0-based indexing.

Input
The first line contains N, the number of integers in our list (N <= 100,000). The next line holds N numbers that are guaranteed to fit inside an integer. Following the list is a number Q (Q <= 10,000). The next Q lines each contain two numbers i and j which specify a query you must answer (0 <= i, j <= N-1).

Output
For each query, output the answer to that query on its own line in the order the queries were made.
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

      int N,Q;
      cin>>N;
      vi arr(N);
      for(int i=0; i<N; i++){
         cin>>arr[i];
      }
      vi prefix_sum(N);
      for(int i=0; i<N; i++){
         if(i==0) prefix_sum[i]=arr[i];
         else
            prefix_sum[i] = prefix_sum[i-1]+arr[i];
      }
      cin>>Q;
      while(Q--){
         int l,r;
         cin>>l>>r;
         int sum=0;
         sum=prefix_sum[r];
         if(l-1 >= 0)
            sum-=prefix_sum[l-1];
         cout<<sum<<endl;

      }
     
     return 0;  

   }

/* 
3
1 4 1
3
1 1
1 2
0 2


4
5
6

*/