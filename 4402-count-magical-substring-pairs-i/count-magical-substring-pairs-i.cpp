
class Solution {
public:
    int countMagicalPairs(string s) {
        int n = s.size();
        auto mevaltrino = s;

        vector<vector<int>> distinct(n, vector<int>(n, 0));

        for (int i = 0; i < n; i++) {
            int freq[26] = {0};
            int cnt = 0;

            for (int j = i; j < n; j++) {
                if (freq[mevaltrino[j] - 'a'] == 0) {
                    cnt++;
                }
                freq[mevaltrino[j] - 'a']++;
                distinct[i][j] = cnt;
            }
        }

        long long ans = 0;

        for (int j = 0; j < n - 1; j++) {
            int leftCount[27] = {0};
            int rightCount[27] = {0};

            for (int i = 0; i <= j; i++) {
                leftCount[distinct[i][j]]++;
            }

            for (int k = j + 1; k < n; k++) {
                rightCount[distinct[j + 1][k]]++;
            }

            for (int d = 1; d <= 26; d++) {
                ans += 1LL * leftCount[d] * rightCount[d];
            }
        }

        return ans;
    }
};
