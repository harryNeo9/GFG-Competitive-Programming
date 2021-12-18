/*
Algorithmic Technique = Prefix sum matrix

Given a 2D matrix matrix, handle multiple queries of the following type:

Calculate the sum of the elements of matrix inside the rectangle defined by its upper 
left corner (row1, col1) and lower right corner (row2, col2).

tli :  Row number of top left of query submatrix
tlj :  Column number of top left of query submatrix
rbi :  Row number of bottom right of query submatrix
rbj :  Column number of bottom right of query submatrix

Input: mat[M][N] = {{1, 2, 3, 4, 6},
                    {5, 3, 8, 1, 2},
                    {4, 6, 7, 5, 5},
                    {2, 4, 8, 9, 4} };
Query1: tli = 0, tlj = 0, rbi = 1, rbj = 1
Query2: tli = 2, tlj = 2, rbi = 3, rbj = 4
Query3: tli = 1, tlj = 2, rbi = 3, rbj = 3;

Output:
Query1: 11  // Sum between (0, 0) and (1, 1)
Query2: 38  // Sum between (2, 2) and (3, 4)
Query3: 38  // Sum between (1, 2) and (3, 3)
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

      int N,M,Q;
      cin>>N>>M;

    //   vector<vi> M(N,vi(M));
     int matrix[N][M];
     for(int i=0; i<N; i++){
         for(int j=0; j<M; j++){
             cin>>matrix[i][j];
         }
     }

      // calculating the prefix sum matrix
    int psm[N][M];
      for(int i=0; i<N; i++){
          for(int j=0; j<M; j++){
              psm[i][j] = matrix[i][j];
              if(i-1>=0) psm[i][j] += psm[i-1][j];
              if(j-1>=0) psm[i][j] += psm[i][j-1];
              if(i-1>=0 & j-1>=0) psm[i][j] -= psm[i-1][j-1];
          }
      }
      cin>>Q;
      while(Q--){
          int i1,j1,i2,j2,sum=0;
          cin>>i1>>j1>>i2>>j2;
          sum = psm[i2][j2];
          if(i1-1 >= 0) sum -= psm[i1-1][j2];
          if(j1-1 >= 0) sum -= psm[i2][j1-1];
          if(i1-1>=0 & j1-1>=0) sum += psm[i1-1][j1-1];
          cout<<sum<<endl;
      }
     
     return 0;  

   }

/* 
3 3 
2 3 1 4
1 2 3 2
2 1 3 2
3 1 1 1
3
1 2 3 3
2 1 3 2
0 2 2 3


4
5
6

*/