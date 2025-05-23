class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
    const long x = max(A, E) < min(C, G) ? (min(C, G) - max(A, E)) : 0;
    const long y = max(B, F) < min(D, H) ? (min(D, H) - max(B, F)) : 0;
    return (C - A) * (D - B) + (G - E) * (H - F) - x * y;
  }
};