#include <iostream>
#include <cstring>
#include <vector>


using namespace std;

int main() {
    string user_string{};
    vector <float> floating_point_numbers{};
    cout << "Float: \n";
    cin >> user_string;
    while(user_string != "0") {
        floating_point_numbers.push_back(stof(user_string));
        cout << "Float: \n";
        cin >> user_string;
    }
    for (const float Number : floating_point_numbers) {
        cout << Number << endl;
    }

}

