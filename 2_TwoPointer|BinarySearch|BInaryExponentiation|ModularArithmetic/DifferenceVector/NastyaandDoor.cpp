
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

      int t,n,k;
      cin>>t;
      
      while(t--){
          cin>>n>>k;
          vi arr(n);
            for(int i=0; i<n; i++){
                cin>>arr[i];
            }
            int p=0;
            vi peaks(n,0);
            for(int i=1;i<k-1; i++){
                if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                    p++;
                }
            }
            int index=1;
            peaks[index] = p;  // #peaks in the 1st subarray
            int l=0, r=l+k-1; 

            while(r <=n-2){
                if(arr[r]>arr[r-1] && arr[r]>arr[r+1])
                    p++;
                r++;
                l++;
                if(arr[l]>arr[l+1] && arr[l]>arr[l-1])
                    p--;
                index++;
                peaks[index] = p;
            }
            int min_index=0,t=0;
            for(int i=1; i<=peaks.size(); i++){
                if(peaks[i] > t){
                     t = peaks[i];
                     min_index = i;
                }
            }
            cout<<t+1<<" "<<min_index<<endl;

      }
     
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

*/