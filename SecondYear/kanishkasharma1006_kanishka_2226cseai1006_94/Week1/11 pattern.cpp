void printDiamond(int n) {
	     for (int i = 1; i <= n; i++){
	         
             for (int j =n-1; j >= i; j--){
                  cout<<" ";
               }
               for(int k=1;k<=i;k++){
                   cout<<"* ";
               }
            cout << endl;
         }
         
        for (int i = 1; i <= n; i++){
            
             for (int j =2; j <= i; j++){
                  cout<<" ";
                }
             for(int k=n;k>=i;k--){
                   cout<<"* ";
                }
            cout << endl;
         }
    }