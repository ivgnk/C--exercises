/*
multiplication_table.cpp
Your task, is to create N×N multiplication table, of size provided in parameter.
For example, when given size is 3:
1 2 3
2 4 6
3 6 9

 For the given example, the return value should be:
[[1,2,3],[2,4,6],[3,6,9]]
 */

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

using namespace std;
vector<vector<int>> multiplication_table(int n) {
    // https://ru.stackoverflow.com/questions/57957/Двумерный-vector
    vector<vector<int>> b(n, vector<int>(n,0.0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            b[i-1][j-1] = i*j;
//            printf("%d %d   %d\n",i,j,i*j);
        }
//        printf("\n");
    }
    return b;
}

int main() {
    vector<vector<int>> b = multiplication_table(3);

    system("cls");
    cout << "Results" << endl;
    }
