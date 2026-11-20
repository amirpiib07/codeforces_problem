#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int height = 0;
    int level_cubes = 0;
    int total_cubes = 0;
 
    for (int i = 1; ; ++i) {
        level_cubes += i;
        total_cubes += level_cubes;
        
        if (total_cubes <= n) {
            height++;
        } else {
            break;
        }
    }
 
    cout << height << "
";
    return 0;
}