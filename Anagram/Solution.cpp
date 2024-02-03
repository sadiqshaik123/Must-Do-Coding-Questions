//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        int alen=a.length();
        int blen=b.length();
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        bool flag=true;
        if(alen!=blen){
            flag=false;
        }
        else{
            for(int i=0;i<alen;i++){
                if(a[i]!=b[i]){
                    flag=false;
                }
            }
        }
        return flag;
        
        
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends
