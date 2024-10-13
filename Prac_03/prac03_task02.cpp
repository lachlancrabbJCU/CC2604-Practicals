#include <cstring>
#include <iostream>

using namespace std;

string replace_string(string haystack, string needle, string replacement_string);

int main() {
    string haystack_str {"at the mat lied the cat in the hat"};
    string needle_str {"at"};
    string replacement_str {"on"};
    string new_string {replace_string(haystack_str, needle_str, replacement_str)};
    cout << new_string << endl;
}

string replace_string(string haystack, string needle, string replacement_string) {
    auto needle_position = haystack.find(needle);
    while (needle_position != string::npos) {
        haystack.replace(needle_position, needle.length(), replacement_string);
        needle_position = haystack.find(needle);
    }
    return haystack;
}
