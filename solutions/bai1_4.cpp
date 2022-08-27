#include <iostream>

using namespace std;

namespace bai1 { void solve(); }

namespace bai1_4 {
    void solve() {
        int test_cases;
        cin >> test_cases;

        for (int i = 1; i <= test_cases; i++)
            bai1::solve();
    }
}
