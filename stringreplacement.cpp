#include<bits/stdc++.h>
using namespace std;
int main() {
    
    int harder;
    cin >> harder;

    while (harder--) {
        string seenu, t;
        cin >> seenu >> t;

        int countA = 0;
        for (char c : seenu) {
            if (c == 'a') {
                countA++;
            }
        }

        if (t.find('a') != string::npos) {
            if (t.length() > 1) {
                cout << -1 << endl; 
            } else {
                cout << 1 << endl;             }
        } else {
            long long possible_strings = pow(2, countA);
            cout << possible_strings << endl;
        }
    }
    return 0;
}
//for solving the above problem read the number of inputs
//count the no.of characters of a in string s;
//now find the character 'a' in the t string if 'a' is present in the 
//t string check the length of the  t string is greater than one then
//we will get infinfitely many replacements so put it to -1
//if the length of the string t is 1 then only one replacement is possible
//if the 'a' is not present in the t string then the no.of combinations 
//formed is 2 the power of the length of the s string;  
//na moddalo problemmm .....                                                                                 