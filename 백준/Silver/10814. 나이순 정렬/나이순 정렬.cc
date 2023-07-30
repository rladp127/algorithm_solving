#include <iostream>
#include <algorithm>
using namespace std;

struct person {
    int age;
    string name;
};

bool compare(const person& now, const person& last) {
    if (now.age != last.age) return now.age < last.age;
    return false;
}

int main () {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    person people[100000];
    int num = 0;
    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> people[i].age >> people[i].name;
    }

    stable_sort(people, people + num, compare);

    for (int i = 0; i < num; i++) {
        cout << people[i].age << ' ' << people[i].name << '\n';
    }


    return 0;
}  