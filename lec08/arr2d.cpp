#include<bits/stdc++.h>

using namespace std;

int main() {
    int a[10];
    //int b[3][3];//uninitialized
    //int b[3][3]={{1,2,3},{4,5,6},{7,8,9}};//fully initialized
//	int b[3][3]={{1,2},{3}};
    int b[3][3] = {1, 2, 3, 4};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    int c[][3] = {1, 2, 3, 4, 5};//c 2X3 array
//	int d[4][]={1,2,3};//Complier Error
//	int e[][]={1,2,3,3,};//Complier Error


    return 0;
}
