class Solution {
  public:
    bool isItPossible(string &s1, string &s2) {
        int n = s1.size();
        int m = s2.size();

        if (n != m) return false;

        int i = 0, j = 0;

        while (i < n && j < m) {
            while (i < n && s1[i] == '#') i++;
            while (j < m && s2[j] == '#') j++;

            if (i == n || j == m)
                return i == n && j == m;

            if (s1[i] != s2[j])
                return false;

            if (s1[i] == 'A' && i < j) // A gose <-- j should <=i
                return false;

            if (s1[i] == 'B' && i > j)// B gose--> j>=i
                return false;

            i++;
            j++;
        }

        while (i < n && s1[i] == '#') i++;
        while (j < m && s2[j] == '#') j++;

        return i == n && j == m;
    }
};