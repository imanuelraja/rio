#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {


string  lists[5] = { "aaa", "z", "cccc", "tt", "jjj"};
    string smallests;
    smallests = lists[0];
    for (int i = 0; i < 5; i++){
        cout << smallests << endl;
        if (lists[i] < smallests){   // Flip < to > to find largest
            smallests = lists[i];
        }
    }
    cout << "Smallest " << smallests << endl;
    cout << *min_element(lists, lists + 5) << endl;

return 0;
