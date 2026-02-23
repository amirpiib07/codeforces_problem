#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 0;
    string s;

    while(n--) {
        cin >> s;   // use cin instead of getline

        if(s == "X++" || s == "++X")
            a++;
        else
            a--;
    }

    cout << a;

    return 0;
}
