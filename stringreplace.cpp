#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence = "The quick brown fox jumps over the lazy dog.";
    string toReplace = "fox";
    string replacement = "cat";

    // Find the position of the substring to replace
    size_t pos = sentence.find(toReplace);
    cout<<pos;

    while (pos != string::npos) {
        // Replace the found substring
        sentence.replace(pos, toReplace.length(), replacement);

        // Find the next occurrence starting from the updated position
        pos = sentence.find(toReplace, pos + replacement.length());
    }

    cout << "Updated sentence: " << sentence << endl;

    return 0;
}
