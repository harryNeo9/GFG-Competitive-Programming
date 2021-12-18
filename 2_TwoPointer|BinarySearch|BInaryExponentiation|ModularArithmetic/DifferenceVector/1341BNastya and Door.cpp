
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

   void func() {
       int t;
       cin>>t;
       while(t--){
           int n, k;
           cin>>n>>k;
           vi a(n);
           for(int i=0; i<n; i++) cin>>a[i];

           int peaks =0;
           for(int i=1; i<k-1; i++){        //find #peaks in 1st sub array
               if(a[i]>a[i-1] && a[i]> a[i+1]) peaks++;
           }
           int maxpeaks = peaks;
           int indx =0;

           int  l = 0, r = k-1;   // initialize the two pointers
           while(r<=n-2){
               // a[r] can be a peak
               // check a[r] is peak if then increment peaks and r 
               if(a[r]>a[r-1] && a[r] > a[r+1]) peaks++;
               r++;
                // a[l] cannot be a peak
                // check a[l] is a peak if then decrement peaks and l
               l++;
               if(a[l]>a[l-1] && a[l]> a[l+1]) peaks--;

               if(peaks > maxpeaks){
                   maxpeaks = peaks;
                   indx =l;
               }
           }
           cout<<maxpeaks+1<<" "<<indx+1<<endl;
       }
   }

   int main(){

      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

      func();
     
     return 0;  

   }

/*
5
8 6
1 2 4 1 2 4 1 2
5 3
3 2 3 2 1
10 4
4 3 4 3 2 3 2 1 0 1
15 7
3 7 4 8 2 3 4 5 21 2 3 4 2 1 3
7 5
1 2 3 4 5 6 1


3 2
2 2
2 1
3 1
2 3

*/