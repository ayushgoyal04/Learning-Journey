#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &tickets, vector<int> &customer, int N, int M) {

    map<int, int> pendingTickets;
    for (int i = 0; i < N; i++) {
        pendingTickets[tickets[i]] += 1;
    }

    for (int i = 0; i < M; i++) {
        auto it = pendingTickets.upper_bound(customer[i]);
        if (it == pendingTickets.begin()) {
            cout << -1 << "\n";
        }
        else {
            it--;
            cout << it->first << "\n";
            it->second -= 1;
            if (it->second == 0)
                pendingTickets.erase(it);
        }
    }
}

int main() {

    int N , M ;
    cin>>N>>M;
    vector<int> tickets (N);
    vector<int> customer (M);
    for(int i=0;i<N;i++){
        cin>>tickets[i];
    }
    for(int i=0;i<M;i++){
        cin>>customer[i];
    }

    solve(tickets, customer, N, M);

    return 0;
}