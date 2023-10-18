class Solution {
  public:
    void printTriangle(int n) {
     for (int i = 0; i < n; i++) {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            std::cout << " ";
        }

        // Print asterisks
        for (int j = 0; j < 2 * i + 1; j++) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }
    }
};