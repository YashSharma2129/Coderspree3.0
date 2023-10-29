int traffic(int n, int m, vector<int> vehicle) {
	// Write your code here.

	int i=0;

int k=0;

while(i<n){

if(vehicle[i]==0){

m--;

}if(m<=-1){

if(vehicle[k]==0){

m++;

}k++;

}i++;

}return i-k;
	
}
