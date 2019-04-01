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
