/*
One day Debu, master of 2-dimensional data structures thought of challenging Himans, master of Trees and gave him a problem which is as follows:

This question is the easiest to understand, but no guarantee about the solution. Given a n x m 2d matrix, you have to perform u modifications of the form k,r1,c1,r2,c2. 
In each modification, you have to add k to all the cells in the block represented by (r1,c1) as upper left corner and (r2,c2) as the lower right corner. After making all 
the modifications you have to answer q queries of the form r1,c1,r2,c2. The answer of each query is the sum of values of all the cells in the block represented by (r1,c1) 
as upper left corner and (r2,c2) as the lower right corner.

Help Himans in solving this problem.

Input:
First line will contain n,m,u,q, the dimensions of the grid,the number of modifications and the number of queries respectively.

Next n lines: Each line containing m integers representing elements of that row (each element between −1000 and 1000 inclusive).

Next u lines : k,r1,c1,r2,c2 , as described in the problem statement ith line representing ith modification.

Next q lines : r1,c1,r2,c2 , as described in the problem statement,ith line representing ith query.

Output:
For each query, print its answer on a new line, the ith line is the answer to the ith query.

Constraints
1≤n≤1000
1≤m≤1000
1≤u≤100000
1≤q≤100000
0≤r1,r2<n
0≤c1,c2<m
−10000≤k≤10000

Sample Input:
3 3 2 2
1 2 3
1 1 0
4 -2 2
2 0 0 1 1
-1 1 0 2 2
0 0 0 1
1 1 2 2

Sample Output:
7
-1
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

      int n,m,u,q;
      cin>>n>>m>>u>>q;

      vector<vll> mtrx(n,vll(m));
      for(int i=0; i<n; i++){
          for(int j=0; j<m; j++){
              cin>>mtrx[i][j];
          }
      }

    //   for(int i=0; i<n; i++){
    //       for(int j=0; j<m; j++){
    //           cout<<mtrx[i][j]<<" ";
    //       }
    //       cout<<endl;
    //   }

    // modifying the original matrix
      int k,r1,c1,r2,c2;
      vector<vll> diff_mtrx(n,vll(m,0));
      while (u--){
          cin>>k>>r1>>c1>>r2>>c2;
         for(int i=r1; i<=r2; i++){
             diff_mtrx[i][c1] += k;
             if(c2+1 <m) diff_mtrx[i][c2+1] -= k;
         }  
      }

    // row vector prefix sum for matrix
    for(int i=0; i<n; i++){
        for(int j=1; j<=m-1; j++){
            diff_mtrx[i][j] += diff_mtrx[i][j-1];
        }
    }

    // adding difference matrix with original matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            mtrx[i][j] += diff_mtrx[i][j];
        }
    }


      vector<vi> preSum(n,vi(m));
      for(int i=0; i<n; i++){
          for(int j=0; j<m; j++){
              preSum[i][j] = mtrx[i][j];
              if(i-1>=0) preSum[i][j] += preSum[i-1][j];
              if(j-1>=0) preSum[i][j] += preSum[i][j-1];
              if(i-1>=0 & j-1>=0) preSum[i][j] -= preSum[i-1][j-1];
          }
      }
      
        int sum=0;
      while(q--){
          cin>>r1>>c1>>r2>>c2;
          sum = preSum[r2][c2];
          if(r1-1>=0) sum -= preSum[r1-1][c2];
          if(c1-1>=0) sum -= preSum[r2][c1-1];
          if(r1-1>=0 & c1-1>=0) sum += preSum[r1-1][c1-1];

          cout<<sum<<endl;
          
      }
      
     
     return 0;  

   }