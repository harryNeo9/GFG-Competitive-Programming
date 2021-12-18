
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

    ll binExpRecursive(ll a, ll b)
    {
        if (b == 0)
            return 1;

        ll temp = binExpRecursive(a, b / 2);
        if (b % 2 == 0)
            return temp * temp;
        else
            return a*temp*temp;
    }

    ll binExpIterative(ll a, ll b){
        ll ans = 1;
        while( b>0){
            if(b%2 != 0) 
                ans *=a;
            a *= a;
            b/=2;
        }
        return ans;
    }

    int main()
    {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        ll a1 = binExpRecursive(2, 5);
        cout<<a1<<endl;
        
        ll a2 = binExpIterative(2, 10);
        cout<<a2<<endl;

        return 0;
    }