 // { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    private:
    bool issafe(vector<vector<int>> &m,  vector<vector<int>> visited,int n,int x,int y)
{
    if(m[x][y]==1 && (x<n && x>=0) && (y<n && y>=0) && visited[x][y]==0)
    {
        return true;
    }
    else{
        return false;
    }

}
    private:
    void solve(vector<vector<int>> &m,  vector<vector<int>> visited,int n,string path,vector<string>& ans,int x,int y)
    {
        if(x==n-1 && y==n-1)
        {
            ans.push_back(path);
            return;
        }
        visited[x][y]=1;
        
        //down
        int newx=x+1;
        int newy=y;
        if(issafe(m,visited,n,newx,newy));
        {
            path.push_back('D');
            solve(m,visited,n,path,ans,newx,newy);
            path.pop_back();
        }
        newx=x;
        newy=y-1;
        if(issafe(m,visited,n,newx,newy));
        {
            path.push_back('L');
            solve(m,visited,n,path,ans,newx,newy);
            path.pop_back();
        }
         newx=x;
        newy=y+1;
        if(issafe(m,visited,n,newx,newy));
        {
            path.push_back('R');
            solve(m,visited,n,path,ans,newx,newy);
            path.pop_back();
        }
         newx=x-1;
        newy=y;
        if(issafe(m,visited,n,newx,newy));
        {
            path.push_back('U');
            solve(m,visited,n,path,ans,newx,newy);
            path.pop_back();
        }
        visited[x][y]=0;
        
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
    vector<string>ans;
    string path="";
    if(m[0][0]==0)
    {
        return ans;
    }
    vector<vector<int>> visited=m;
    int x=0,y=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            visited[i][j]=0;
        }
    }
    solve(m, visited,n,path,ans, x, y);
    return ans;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends