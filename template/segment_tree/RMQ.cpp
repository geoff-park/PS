#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<vector<int>> vvi;

struct RMQ
{
    int n;
    vi rangeMin;
    RMQ(const vi &array)
    {
        n = array.size();
        rangeMin.resize(n * 4);
        init(array, 0, n - 1, 1);
    }
    int init(const vi &array, int left, int right, int node)
    {
        if (left == right)
            return rangeMin[node] = array[left];
        int mid = (left + right) / 2;
        int leftMin = init(array, left, mid, node * 2);
        int rightMin = init(array, mid + 1, right, node * 2 + 1);
        return rangeMin[node] = min(leftMin, rightMin);
    }
};
