#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<string> available_words(n);
    unordered_map<char, int> available_counter;

    for (int i = 0; i < n; i++) {
        cin >> available_words[i];
        for (char c : available_words[i]) {
            available_counter[c]++;
        }
    }

    vector<string> message_words(m);
    unordered_map<char, int> required_counter;

    for (int i = 0; i < m; i++) {
        cin >> message_words[i];
    }

    // Adjust k for shifts larger than 26
    k %= 26;

    // Compute required characters after shifting
    for (const string &word : message_words) {
        for (char c : word) {
            char shifted_char = 'a' + (c - 'a' + k) % 26;
            required_counter[shifted_char]++;
        }
    }

    // Check if all required characters are available in sufficient quantity
    bool success = true;
    for (const auto &[char_needed, required] : required_counter) {
        if (available_counter[char_needed] < required) {
            success = false;
            break;
        }
    }

    cout << (success ? "Make her kokoro go doki-doki!" : "It is gonna be daijoubu.") << endl;
    return 0;
}