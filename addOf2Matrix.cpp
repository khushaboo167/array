// add 2 matrix;


#include<iostream>
#include<climits>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the number of rows and columns for the first array: ";
    cin >> n >> m;

    int arr[n][m];
    cout << "Enter the elements in the array: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Array 1:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int k, l;
    cout << "Enter the number of rows and columns for the second array: ";
    cin >> k >> l;

    int arr2[k][l];
    cout << "Enter the elements in the array: " << endl;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < l; j++) {
            cin >> arr2[i][j];
        }
    }

    cout << "Array 2:" << endl;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < l; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    if (n != k || m != l) {
        cout << "Arrays are not of the same size. Addition not possible." << endl;
        return 0;
    }

    int res[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            res[i][j] = arr[i][j] + arr2[i][j];
        }
    }

    cout << "Resultant Array:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
