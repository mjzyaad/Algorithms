// Z Algorithm
//
// O(N) string comparison algorithm
// For a string s of length n, the function returns
// an aeeay z, where z[i] is the length of the
// longest substring, starting at i and which is also
// the prefix of s.
//
// Reference: https://cp-algorithms.com/string/z-function.html
vector<int> z_function(string s) {
  int n = s.length();
  vector<int> z(n, 0);
  int L = 0, R = 0;
  for (int i = 1; i < n; i++) {
    if (i <= R) {
      z[i] = min(z[i - L], R - i + 1);
    }
    while (i + z[i] < n && s[z[i]] == s[i + z[i]]) {
      z[i]++;
    }
    if (i + z[i] - 1 > R) {
      L = i;
      R = i + z[i] - 1;
    }
  }
  return z;
}
