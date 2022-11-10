 vector<int> removeDuplicates(vector<int>&s) {
        // Length of String
        int n=s.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            if(st.size()!=0 && st.top()==s[i]){
                while(st.size()!=0 && st.top()==s[i]) st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        vector<int>res;;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
            
        }
         reverse(res.begin(),res.end());
        return res;
    }
int main(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int>ans=removeDuplicates(arr);
    for(int i:ans) cout<<i<<" ";
}
