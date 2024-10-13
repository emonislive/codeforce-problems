// USING PROPER DSA (BINARY SEARCH + MERGE SORT)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void merge(vector<int>& arr, int start, int mid, int end) {
    int s1ze = mid - start + 1;
    int s2ze = end - mid;
    vector <int> leftArr(s1ze), rightArr(s2ze);
    for (int i = 0; i < s1ze; i++) {
        leftArr[i] = arr[start + i];
    }
    for (int i = 0; i < s2ze; i++) {
        rightArr[i] = arr[mid + 1 + i];
    }
    int i = 0;
    int j = 0;
    int k = start;
    while (i < s1ze && j < s2ze) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        }
        else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }
    while (i < s1ze) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }
    while (j < s2ze) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int start, int end) {
    if (start < end) {
        int mid = start + (end - start) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}
void binarySearch(const vector<int>& arr, int find, int len) {
    int start = 0;
    int end = len - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == find) {
            cout << "found" << endl;
            return;
        }
        else if (arr[mid] < find)
            start = mid + 1;
        else
            end = mid - 1;
    }
    cout << "not found" << endl;
}

void solve(int len, int totFind) {
    vector<int> arr(len);
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }
    mergeSort(arr, 0, len - 1);
    for (int i = 0; i < totFind; i++) {
        int find;
        cin >> find;
        binarySearch(arr, find, len);
    }
}
int main() {
    optimize();
    int len, totFind;
    cin >> len >> totFind;
    solve(len, totFind);
    return 0;
}



// USING STL
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define endl '\n'

void solve(int size, int findSize) {
    int find;
    vector<int> v(size);
    for (int i = 0; i < size; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < findSize; i++) {
        cin >> find;
        bool ans = binary_search(v.begin(), v.end(), find);
        if (ans)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int size, findSize;
    cin >> size >> findSize;
    solve(size, findSize);
    return 0;
}
