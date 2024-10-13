#include <cstring>
#include <iostream>

using namespace std;

string replace_string(string haystack, string needle, string replacement_string);
string replace_string_view(string haystack, string_view needle, string_view replacement_string);

int main() {
    // Task 1
    string user_string_1{}, user_string_2{};
    cin >> user_string_1;
    cin >> user_string_2;

    auto result { user_string_1 <=> user_string_2 };
    if (is_lt(result)) { cout << user_string_1 << " " << user_string_2 << endl; }
    else if (is_gt(result)) { cout << user_string_2 << " " << user_string_1 << endl; }
    else{ cout << user_string_1 << " " << user_string_2 << endl; }
}

