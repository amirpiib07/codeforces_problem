#include <bits/stdc++.h>
using namespace std;
int main() {
    int grid[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> grid[i][j];
        }
    }
    int row=0, col=0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (grid[i][j] == 1) {
                row = i;
                col = j;
                break;
            }
        }
    }
    cout<<abs(row-2)+abs(col-2);
    return 0;
}