#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};
int main() {
    int n;
    cin >> n;
    Student x[n];
    for(int i=0; i<n; i++){
        cin >> x[i].nm >> x[i].cls >> x[i].s >> x[i].id;
        cin >> x[i].math_marks >> x[i].eng_marks;
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(x[i].eng_marks < x[j].eng_marks) swap(x[i], x[j]);
            else if(x[i].eng_marks == x[j].eng_marks && (x[i].math_marks < x[j].math_marks)){
                swap(x[i], x[j]);
            }
            else if(x[i].eng_marks == x[j].eng_marks && (x[i].math_marks == x[j].math_marks)){
                if(x[i].id > x[j].id) swap(x[i], x[j]);
            }
        }
        cout << x[i].nm << " " << x[i].cls << " " << x[i].s << " ";
        cout << x[i].id << " " << x[i].math_marks << " " << x[i].eng_marks << endl;
    }

    
}