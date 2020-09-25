#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int minSwap(vector<int>& A, vector<int>& B) {        
        int n0 = 0, s0 = 1,n1,s1;
        for (int i = 1; i < A.size(); i++) {
            int n1 = INT_MAX, s1 = INT_MAX;
            if (A[i] > A[i - 1] && B[i] > B[i - 1]) {
                n1 = n0, s1 = s0 + 1;
            }
            if (A[i] > B[i - 1] && B[i] > A[i - 1]) {
                n1 = min(n1,s0);
                s1 = min(s1,n0 + 1) ;
            }
            n0 = n1, s0 = s1;
        }
        return min(n0,s0);
    }
};
int main() {

}