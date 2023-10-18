class Solution{
public:
	
	void printTriangle(int n) {
	     for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n - i; j++) {
            std::cout << j;
            if (j < n - i) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
	     }
	}
};