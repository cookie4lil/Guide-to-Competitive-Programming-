#include <bits/stdc++.h>   // a feature of g++ compiler allows to include the entire library
using namespace std;       // declares that the classes and functions of standard library can be used directly in the code

int main () {
    ios::sync_with_stdio(0); // make input and output more efficient
    cin.tie(0);

    // Note that "\n" works faster than endl, because endl always causes a flush operation

    string s;
    getline(cin, s) // read a whole input line, containing space

    while (cin >> x) {
        // if the data is unknown
    }

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); // when files are used for input output

    // Modular Arithmetric
    // (a+b) mod m = (a mod m + b mod m) mod
    // (a-b) mod m = (a mod m - b mod m) mod
    // (a.b) mod m = (a mod m . b mod m) mod
    long long x = 1;
    for (int i = 1; i <= n; i++) {
        x = (x*i) % m;
    }
    cout << x << "\n";  // caculate n!

    // to make sure there are no negative remainders
    x = x % m;
    if (x < 0) x += m;


    // shorten code
    typedef long long ll;
    typedef vector<int> vi;
    typedef pair<int, int> pi;
    #define F first;
    #define S second;
    #define PB push_back;
    #define MP make_pair;
    #define REP(i,a,b) for (int i = a; i <= b; i++);

}
