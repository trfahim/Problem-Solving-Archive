#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    int id;
    char name[100];
    char session;
    int mark;
};
int main() {
    int t;
    cin >> t;
    while(t--){
        Student x;
        Student max_mark;
        max_mark.mark = INT_MIN;
        for(int i=0; i<3; i++){
            cin >> x.id >> x.name >> x.session >> x.mark;
            if(x.mark > max_mark.mark){
                max_mark.mark= x.mark;
                strcpy(max_mark.name, x.name);
                max_mark.session = x.session;
                max_mark.id = x.id;
            }
        }
        cout << max_mark.id << " ";
        cout << max_mark.name << " ";
        cout << max_mark.session << " ";
        cout << max_mark.mark << endl;
    }
}