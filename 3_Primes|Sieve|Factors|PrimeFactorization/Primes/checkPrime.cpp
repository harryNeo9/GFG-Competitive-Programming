
     #include <bits/stdc++.h>
     using namespace std;

     #define ll long long int
     #define ld long double
     #define mod 1000000007
     #define inf 1e18
     #define endl "\n"
     #define pb emplace_back
     #define vi vector<int>
     #define vll vector<ll>
     #define vs vector<string>
     #define pii pair<int, int>
     #define pll pair<ll, ll>
     #define ump unordered_map
     #define mp map
     #define pq_max priority_queue<ll>
     #define pq_min priority_queue<ll, vll, greater<ll>>
     #define ff first
     #define ss second
     #define mid(l, r) (l + (r - l) / 2)
     #define loop(i, a, b) for (int i = (a); i <= (b); i++)
     #define looprev(i, a, b) for (int i = (a); i >= (b); i--)

     int main()
     {

          ios_base::sync_with_stdio(false);
          cin.tie(NULL);

          int t, n;
          cin >> t;
          while (t--)
          {
               cin >> n;
               int cnt = 0;
               for (int i = 1; i <= sqrt(n); i++)
               {
                    if (n % i == 0)
                    {
                         cnt++;
                         if (n % i != i)
                              cnt++;
                    }
               }
               if (cnt == 2) //cnt == 0 if i= 2 to sqrt(n), cnt is the total number of factors of n!
                    cout << n << " is Prime\n";
               else
                    cout << n << " is not Prime\n";
          }

          return 0;
     }