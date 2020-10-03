#include<bits/stdc++.h>

using namespace std;

// Selection Sort

void selection_sort(auto a,auto b) {
    for(auto it=a;it<b;it++) {
        auto itr = it;
        auto mi = itr;
        while(itr<b) {
            if(*(mi)>*(itr)) mi=itr;
            itr++;
        }
        swap(*(it),*(mi));
    }
    return;
}

int main() {
    int n;
    cin>>n;

    vector<int> a;
    for(int i=0;i<n;i++) {
        int num;
        cin>>num;
        a.push_back(num);
    }

    selection_sort(a.begin(),a.end());
    for(int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    return 0;

}
