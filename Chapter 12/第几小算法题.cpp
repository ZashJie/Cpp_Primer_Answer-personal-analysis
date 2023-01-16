#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int A[100010];


// 查询
int demand(vector<int> a, int num) {
    // int n = 1;
    // for (int i : a) {
    //   if (i < a[num - 1]) n++;
    // }
    int s = a[num - 1];
    sort(a.begin(), a.end());
    int n = 1;
    for (int i : a) {
        if (i == s) {
            return n;
        }
        else {
            n++;
        }
    }
}

int main()
{
    // 请在此输入您的代码
    int size;
    cin >> size;
    for (int i = 0; i < size; i++) {
        cin >> A[i];
    }

    // m代表执行操作次数
    int num;
    cin >> num;


    for (int i = 0; i < num; i++) {
        int op[4];
        cin >> op[0];
        if (op[0] == 1) {
            cin >> op[1] >> op[2];
            A[op[1] - 1] = op[2];
            cout << "----------------" << endl;
            for (int q : A) {
                cout << q << endl;
            }
            cout << "----------------" << endl;
        }
        else {
            cin >> op[1] >> op[2] >> op[3];
            vector<int> a;
            // 切片大小
            int s = op[2] - op[1];
            for (int o = op[1] - 1; o <= op[2] - 1; o++) {
                a.push_back(A[o]);
            }
            cout << demand(a, op[3]) << " ";
        }
    }

    return 0;
}