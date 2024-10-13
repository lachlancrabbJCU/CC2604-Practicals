#include <cstring>
#include <iostream>

using namespace std;

string replace_string(string haystack, string_view needle, string_view replacement_string);

int main() {

    string haystack_str {"at the mat lied the cat in the hat"};
    string_view needle_str {"at"};
    string_view replacement_str {"on"};
    string new_string {replace_string(haystack_str, needle_str, replacement_str)};
    cout << new_string << endl;

}

string replace_string(string haystack, string_view needle, string_view replacement_string) {
    auto needle_position = haystack.find(needle);
    while (needle_position != string::npos) {
        haystack.replace(needle_position, needle.length(), replacement_string);
        needle_position = haystack.find(needle);
    }
    return haystack;
}