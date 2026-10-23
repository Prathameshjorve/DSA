
class Solution {
public:
    int maximumSum(vector<int>& a) {
        int n = a.size();
        int noDel = a[0];
        int oneDel = INT_MIN;
        int res = a[0];

        for (int i = 1; i < n; i++) {
            int prevNoDel = noDel;
            int prevOneDel = oneDel;

            noDel = max(a[i], prevNoDel + a[i]);

            oneDel = max(prevNoDel,
                         prevOneDel == INT_MIN
                             ? INT_MIN
                             : prevOneDel + a[i]);

            res = max(res, max(noDel, oneDel));
        }

        return res;
    }
};
