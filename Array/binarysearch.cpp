/*
 #include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = (high + low) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 15;

    int result = binarySearch(arr, size, key);
    if (result == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index " << result << endl;
    }

    return 0;
} */
//floor and ceil
/* #include <iostream>
#include <vector>
using namespace std;
vector<int> FC(vector<int> arr,int size,int key){
    int l =0;
    int h= size-1;
    int floor = -1;
    int ceil = -1;
    while(l<=h)
    {
        int mid = l  + (h-l)/2;
        if(arr[mid] == key){
            floor = arr[mid];
            ceil = arr[mid];
            return {floor,ceil};
        }
        else
            {
                if(arr[mid] > key){
                    ceil = arr[mid];
                    h = mid -1;
                }else{
                    floor = arr[mid];
                    l = mid +1;
                }
            }
    }
    return {floor,ceil};
}
int main(){
    vector<int> arr = {1,2,3,4,5,7,8};
    int size = arr.size();
    int key = 4;
    vector<int> result = FC(arr,size,key);
    cout<<result[0]<<","<<result[1]<<endl;
    
} */
#include <bits/stdc++.h>
using namespace std;
int binary_search(vector<int> arr,int l,int r,int key)
{
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] < key)
        {
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
    }
    return -1;
}
int findpos(vector<int> arr,int key)
{
    int l =0;
    int h = 1;
    int val = arr[0];
    while(val<key)
    {
        l = h;
        if(2*h < arr.size()-1)
        {
            h = 2*h;
        }
        else
        {
            h = arr.size()-1;
        }
        val = arr[h];
    
    }
    return binary_search(arr,l,h,key);
}
int main()
{
    vector<int> arr = {1,2,3,4,5,7,8};
    cout<<"Enter the key to search"<<endl;
    int key;
    cin>> key;
    if(findpos(arr,key))
    {
        cout<<"Element found"<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
}
