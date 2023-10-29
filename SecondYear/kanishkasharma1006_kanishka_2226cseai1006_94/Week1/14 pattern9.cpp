void printTriangle(int n) {
        
	     for (int i = 1; i <= n; i++){
	         
             for (int j =n; j >= i; j--){
                   cout<<"*";
               }
             for (int k =2; k <= i; k++){
                  cout<<"  ";
               }
             for (int l =n; l >= i; l--){
                   cout<<"*";
               }
            cout << endl;
         }
	     for (int i = 1; i <= n; i++){
	         
             for (int j =1; j <= i; j++){
                   cout<<"*";
               }
             for (int k =n-1; k >= i; k--){
                  cout<<"  ";
               }
             for (int l =1; l <= i; l++){
                   cout<<"*";
               }
            cout << endl;
         }
    }