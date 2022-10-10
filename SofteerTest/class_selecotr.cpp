#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(pair<int,int> a, pair<int,int> b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    else {
        return a.second < b.second;
    }
}

int main() {
    int Class_num=0;
    vector<pair<int, int> > class_time;
    cin >> Class_num;
    
    for (int i = 0; i < Class_num; i++) {
        int class_start_time,class_end_time=0;
        cin >> class_start_time >> class_end_time;
        class_time.push_back(pair<int, int>(class_start_time, class_end_time));
    }

    sort(class_time.begin(), class_time.end(),compare);

    int max_num = 1;
    int max_end_time = class_time[0].second;

    for (int j = 1; j < Class_num; j++) {
        if (max_end_time <= class_time[j].first) {
            max_num = max_num+1;
            max_end_time = class_time[j].second;
        }
    }
    cout << max_num;
    return 0;
}
