void withoutloop(int x, vector<int> &ans){
    if(x==0)   return;
    withoutloop(x - 1, ans);
    ans.push_back(x);
}
vector<int> printNos(int x) {
    vector<int> ans;
    withoutloop(x, ans);

    return ans;
}
