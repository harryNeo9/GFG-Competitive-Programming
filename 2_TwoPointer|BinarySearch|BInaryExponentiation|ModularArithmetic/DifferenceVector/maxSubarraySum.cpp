
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

      int n,k;
      cin>>n>>k;
      vi arr(n);
      for(int i=0; i<n; i++){
          cin>>arr[i];
      }
      int sum=0,max_sum = 0;
      // 1st sub array sum
      for(int i=0; i<=k-1; i++)
        sum+=arr[i];
    max_sum =sum;
        int l=0,r=k-1; // initializing the two pointers
        while(k<=n-1){  // perform transitions and update max sum
            k++;
            sum+=arr[k];
            sum-arr[l];
            l++;
            if(sum>max_sum)
                max_sum=sum;
        }
        cout<<max_sum<<endl;
     
     return 0;  

   }

/*
5
3
2 1 2 3 5

10

*/