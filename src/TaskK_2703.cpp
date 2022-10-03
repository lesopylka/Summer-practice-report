#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

enum Position {
    INPUT,
    OUTPUT,
    STACK1,
    STACK2
};


int main() {
    int n;
    cin >> n;
    queue<int> input;
    for (int i = 0; i < n; ++i) {
        int v;
        cin >> v;
        input.push(v);
    }
    vector<int> stack1;
    vector<int> stack2;
    stack1.reserve(n);
    stack2.reserve(n);
    vector<Position> pos(n + 1,INPUT);
    for (int i = 1; i <= n; ++i) {
        if (pos[i] == INPUT) {
            while (input.front() != i) {
                cout << "1\n";
                stack1.push_back(input.front());
                pos[input.front()] = STACK1;
                input.pop();
            }
            input.pop();
            cout << "1\n-1\n";
            pos[i] = OUTPUT;
        } else if (pos[i] == STACK1) {
            while (stack1.back() != i) {
                cout << "12\n";
                stack2.push_back(stack1.back());
                pos[stack1.back()] = STACK2;
                stack1.pop_back();
            }
            stack1.pop_back();
            cout << "-1\n";
            pos[i] = OUTPUT;
        } else if (pos[i] == STACK2) {
            while (stack2.back() != i) {
                cout << "21\n";
                stack1.push_back(stack2.back());
                pos[stack2.back()] = STACK1;
                stack2.pop_back();
            }
            stack2.pop_back();
            cout << "-2\n";
            pos[i] = OUTPUT;
        }
    }


}