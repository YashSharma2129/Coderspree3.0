vector<int> printNos(int x) {
    vector<int> store;
    if(x==1){
        store.push_back(1);
        return store;
    }
    store= printNos(x-1);
    store.push_back(x);
     return store;
}