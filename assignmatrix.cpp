// Program Purpose: reads in matrixes from a file, analyzes its values for vertical additive symmetry (V.A.S).
It will sort that data and display the resulting array alongside a message that indicates whether the given data demonstrates V.A.S//

#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

const int MAX_SIZE = 20;

int main() {
    ifstream in("matrixes.txt");
    if (in.fail()) {
        cout << "File could not be opened!" << endl;
        cout << "Press the enter key once or twice to continue... " << endl;
        exit(0);
    }
    int rows, cols, i, j, k, t;
    while (in >> rows) {
        in >> cols;

        float arr[MAX_SIZE][MAX_SIZE];
        float sum[MAX_SIZE];
        for (i = 0; i < rows; i++)
            for (j = 0; j < cols; j++)
                in >> arr[i][j];
        for (i = 0; i < cols; i++) {
            sum[i] = 0;
            for (j = 0; j < rows; j++)
                sum[i] += arr[j][i];
        }
        cout << endl << "Input :" << endl;
        cout << fixed << setprecision(5);
        for (i = 0; i < rows; i++) {
            cout << endl;
            for (j = 0; j < cols; j++)
                cout << setw(20) << arr[i][j];
        }
        cout << endl << endl << "Sums :" << endl;
        for (i = 0; i < cols; i++)
            cout << setw(20) << sum[i];
        bool flag = true;
        for (i = 0, j = cols - 1; i < j; i++, j--)
            if (sum[i] != sum[j]) {
                flag = false;
                break;
            }
        cout << endl << endl << "Vertical Additive Symmetry : " << endl;
        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        for (i = 0; i < rows; i++) {
            for (j = 0; j < cols; j++) {
                for (k = j + 1; k < cols; k++)
                    if (arr[i][j] > arr[i][k]) {
                        t = arr[i][j];
                        arr[i][j] = arr[i][k];
                        arr[i][k] = t;
                    }

            }
        }
        cout << "Sorted :" << endl;
        cout << fixed << setprecision(5);
        for (i = 0; i < rows; i++) {
            cout << endl;
            for (j = 0; j < cols; j++)
                cout << setw(20) << arr[i][j];
        }
    }
}
