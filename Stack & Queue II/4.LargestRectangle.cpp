#include <bits/stdc++.h>
using namespace std;

int largestRectangle(vector<int> &heights)
{
    // Write your code here.
    int n = heights.size();

    vector<int> left(n);
    vector<int> right(n);

    stack<int> stl;

    for (int i = 0; i < n; i++)
    {
        if (stl.empty())
        {
            left[i] = 0;
        }
        else
        {
            while (!stl.empty())
            {
                if (heights[stl.top()] < heights[i])
                {
                    left[i] = stl.top() + 1;
                    break;
                }
                stl.pop();
            }
            if (stl.empty())
            {
                left[i] = 0;
            }
        }

        stl.push(i);
    }

    stack<int> str;

    for (int i = n - 1; i >= 0; i--)
    {
        if (str.empty())
        {
            right[i] = n - 1;
        }
        else
        {
            while (!str.empty())
            {
                if (heights[str.top()] < heights[i])
                {
                    right[i] = str.top() - 1;
                    break;
                }
                str.pop();
            }

            if (str.empty())
            {
                right[i] = n - 1;
            }
        }

        str.push(i);
    }

    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int width = (right[i] - left[i]) + 1;
        int area = width * heights[i];
        maxi = max(maxi, area);
    }

    return maxi;
}

int main()
{
}