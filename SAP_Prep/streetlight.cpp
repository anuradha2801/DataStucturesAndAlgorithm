#include <iostream>
#include <vector>
using namespace std;
// Function to calculate the next day's state of street lights
vector<int> calculateNextDayState(const vector<int>& currentState) {
    int N = currentState.size();
    vector<int> nextState(N);
    nextState[0] = currentState[1];
    nextState[N - 1] = currentState[N - 2];
    for (int i = 1; i < N - 1; ++i) {
        nextState[i] = currentState[i - 1] ^ currentState[i + 1];
    }
    return nextState;
}
int main() {
    int currentStateSize;
    cin >> currentStateSize;
    vector<int> currentState(currentStateSize);
    for (int i = 0; i < currentStateSize; ++i) {
        cin >> currentState[i];
    }
    int M;
    cin >> M;
    for (int day = 0; day < M; ++day) {
        currentState = calculateNextDayState(currentState);
    }
    for (int i = 0; i < currentStateSize; ++i) {
        cout << currentState[i] << " ";
    }
    return 0;
}
