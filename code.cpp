#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

typedef vector<int> vi;


int maxPresent(int n, vi arr){
    int min = 9;
    int index = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] < min){ 
            min = arr[i];
            index = i;
        }
    }
    ++arr[index];
    int ret = 1;
    for(int i = 0; i < n; i++){
        ret *= arr[i];
    }
    return ret;
}

int main() 
{
	int n;
    vi a;
	cin >> n;
    
    if(n <= 0 || n > 9){
        cout << "Input error";
        return 0;
    }
    for(int i = 0; i < n; i++){
        int inp;
        cin >> inp;
        if(inp < 0 || inp > 9) {
            cout << "Input error";
            return;
        }
        a.push_back(inp);
    }
    cout << maxPresent(n, a);
    return 0;
} 
