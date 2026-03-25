class Solution {
public:
    bool hasAllCodes(string s, int k) {

          if(s.length()<k) return 0;

        unordered_set<string> st;
        int need = 1 << k;  // 2^k

        for (int i = 0; i <= s.length() - k; i++) {
            st.insert(s.substr(i, k));
            if (st.size() == need)
                return true;
        }
        return false;
    }
};