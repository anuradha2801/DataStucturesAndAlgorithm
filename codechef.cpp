//https://www.codechef.com/LP1TO201/submit/IMDB
#include <iostream>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--){
        int arr[2];
        for (int i = 0; i < 2; i++){
            cin >> arr[i];
        }
        int n = arr[0];
        int x = arr[1];
            int S[n]; int R[n];
            for (int i = 0; i < n; i++) {
                cin >> S[i];
                cin>>R[i];
            }
             int maxi = 0;
            int check = 0;
            for (int i = 0; i < n; i++) {
                if (S[i]<=x) {
                        check=1;
                        maxi = max(maxi, R[i]);
                    }
            }
            if (check == 1) {
                cout << maxi << endl;
            }
        }
    return 0;
}
