
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

     vector<int> sieve(1000005); //n<=10^6
     int N = 1000000;

     //step 1 - mark from 2 to 10^6 as 1
     for (int i = 2; i <= N; i++)
          sieve[i] = 1;


     //step 2 - mark all the multiplies of i if sieve[i] == 1
     for (int i = 2; i*i<=N; i++)
     {
          if (sieve[i] == 1)
          {
               for (int j = i * i; j <= N; j += i)
               {
                    sieve[j] = 0;
               }
          }
     }

     // step 3 - print all primes
     for (int i = 0; i <= N; i++)
     {
          if (sieve[i] == 1)
          {
               cout << i << " ";
          }
     }
     cout << endl;

     return 0;
}