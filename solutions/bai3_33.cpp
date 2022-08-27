#include <iostream>
#include <cmath>

using namespace std;

namespace bai3_33 {
    int degree(int n, int p){
        int ans = 0;
        for (int i = p; i <= n; i += p) {
            int tmp = i;
            while (tmp % p == 0) {
                ++ans;
                tmp /= p;
            }
        }
        return ans;
    }

    int nt(int n) {
        for (int i = 2; i <= sqrt(n); i++)
            if (n % i == 0)
                return 0;
        return n;
    }

    long long countDivisor(int n) {
        long long res = 1;
        for (int i = 1; i <= n; i++) {
            if(nt(i))
                res *= (degree(n, i) + 1);
        }
        return res;
    }

    void solve() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            cin >> n;
            cout << countDivisor(n) << endl;
        }
    }
}
