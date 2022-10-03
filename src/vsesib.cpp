#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int D, prev, length, cur, moments[3], iter;
    moments[0] = 0;
    moments[1] = 0;
    moments[2] = 0;
    bool drama;
    cin >> D;
    for (int i = 0; i < D; i++) {
        cin >> length >> prev;
        iter = 0;
        drama = true;
        for (int i = 0; i < length - 1; i++) {
            cin >> cur;
            if (iter == 0) {
                if (prev < cur) {
                    moments[iter] = i + 1;
                    iter++;
                }
                else if (prev > cur) {
                    drama = false;
                }
            }
            else if (iter == 1) {
                if (prev > cur) {
                    moments[iter] = i + 1;
                    iter++;
                    if (i == length - 2) {
                        moments[iter] = length;
                    }
                }
                else if (cur == prev) {
                    drama = false;
                }
            }
            else if (iter == 2) {
                if (prev == cur) {
                    moments[iter] = i + 1;
                    iter++;
                }
                else if (prev < cur) {
                    drama = false;
                }
                else if (i == length - 2) {
                    moments[iter] = length;
                }
            }
            else if (iter == 3) {
                if (cur != prev) {
                    drama = false;
                }
            }
            if ((i == length - 2) && (iter < 2)) {
                drama = false;
            }
            prev = cur;
        }
        if (drama == true) {
            cout << "Freytag " << moments[0] << ' ' << moments[1] << ' ' << moments[2]
                 << '\n';
        }
        else
            cout << "Nein\n";
    }
}