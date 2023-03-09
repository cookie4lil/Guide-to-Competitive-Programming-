// Recursive Algorithms

#include <bits/stdc++.h>
using namespace std;

// 2.2.1 subsets of {1,2,3} are {}, {1}, {2}, {3}, {1,2}, {1,2,3}, {2,3}, {1,3}

vector<int> subset;

void search(int k) {
    if (k == n + 1) {
        // process subset
    }
    else {
        // include k in the subset
        subset.push_back(k);
        search(k + 1);
        subset.pop_back();
        // don't include k in the subset
        search(k+1);
    }
}

// 2.2.1 permutations
vector<int> permutation;
bool chosen[n+1];
