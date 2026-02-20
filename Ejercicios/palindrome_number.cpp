class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        if (x % 10 == 0 && x != 0) return false;
        int numeroInvertido = 0;
        while (x > numeroInvertido) {
            numeroInvertido = numeroInvertido * 10 + x % 10;
            x /= 10;
        }
        return (x == numeroInvertido || x == numeroInvertido / 10);
    }
};