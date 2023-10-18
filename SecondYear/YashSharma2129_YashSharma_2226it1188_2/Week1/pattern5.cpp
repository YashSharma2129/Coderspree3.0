class Solution{
public:
	
	void printTriangle(int n) {
 for(int i=n;i>0;i--){
            for(int j=0;j<i;j++){
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
	}
};