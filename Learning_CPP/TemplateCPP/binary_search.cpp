#include<iostream>
#include<vector>

using namespace std;
template<typename T>

int BS(vector<T> &arr, int size, T target)
{
    int left = 0;
    int right = size-1;
    int mid = left + (right - left) / 2;

    while(left<=right)
    {
        mid = left + (right - left) / 2;

        if(arr[mid] == target) return ++mid;

        else if(arr[mid]> target) right = mid - 1;

        else left = mid + 1;
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    vector<double> arr2 = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};

    int size = 6;
    int target = 5;
    double target2 = 5.5;

    cout<<BS(arr, size, target)<<endl;
    cout<<BS(arr2, size, target2)<<endl;
}
