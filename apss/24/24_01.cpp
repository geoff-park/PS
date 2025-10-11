#include <bits/stdc++.h>
using namespace std;

struct RMQ
{
    int n;
    vector<int> rangeMin;

    RMQ(const vector<int> &array)
    {
        n = array.size();
        rangeMin.resize(n * 4);
        init(array, 0, n - 1, 1);
    }

    int init(const vector<int> &array, int left, int right, int node)
    {
        if (left == right)
            return rangeMin[node] = array[left];
        int mid = (left + right) / 2;
        int leftMin = init(array, left, mid, node * 2);
        int rightMin = init(array, mid + 1, right, node * 2 + 1);
        return rangeMin[node] = min(leftMin, rightMin);
    }
};
