
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


   int binarySearch(vi arr,int key){
       int n = arr.size();
       int l =0, h=n-1;
       int indx = -1;
       while(l<=h){
           int mid = (l+(h-l)/2);
           if(arr[mid] == key){
               indx=mid;
               break;
           }
           else if(arr[mid]<key){
               l = mid+1;
           }else{
               h = mid-1;
           }    
       }
       return indx;
   }


    int BinarySearch(vi arr,int key){
        int low=0;
        int high=arr.size()-1;
        while(low<=high){
            int mid = (low+(high-low)/2);
            if(arr[mid]<key){
                low=mid+1;
            }else if(arr[mid]>key){
                high = mid-1;
            }else{
                return mid;
            }
        }
        return -1;
    }

   int main(){

      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

     int n, key;
     cin>>n;
     vi arr(n);
     for(int i=0; i<n; i++){
         cin>>arr[i];
     }
     cin>>key;


    int pos = BinarySearch(arr,key);


    if(pos == -1)
        cout<<"Search failed. Key not found in array!\n";
    else
        cout<<"Search success. Key found at position "<<pos<<"\n";


   }