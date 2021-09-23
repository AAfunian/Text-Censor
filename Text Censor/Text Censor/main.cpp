//
//  main.cpp
//  Text Censor
//
//  Created by Amir on 8/6/21.
//

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    cout << "Enter a sentence: ";
    vector<string> sentence;
    string temp;
    getline(cin, temp);
    //enter specific words to censor
    vector<string> censor = {"hate", "bad", "no"};
    istringstream split(temp);
    for (string temp; getline(split, temp, ' '); sentence.push_back(temp));

    cout << "Censor checked: ";
    for (string x : sentence) {
        string word;
        for (char z : x) {
            if (isalpha(z)) {
                word.push_back(z);
            }
        }
        bool ok = true;
        for (int counter = 0; counter < sentence.size(); ++counter) {
            if (word == censor[counter]) {
                ok = false;
            }
        }
        if (ok == true) cout << x << " ";
        else {
            for (char a : word) cout << "*";
            cout << ' ';
        }
    }
    cout << "\n";
}

