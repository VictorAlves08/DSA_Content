// https://leetcode.com/problems/first-unique-character-in-a-string/

#include <iostream>
#include <unordered_map>

using namespace std;

int firstUniqChar(string s)
{
    int index = -1;

    unordered_map<char, int> charFreqMap;

    for (int i = 0; i < s.length(); i++)
    {
        char currentLetter = s.at(i);

        int frequency = charFreqMap.count(currentLetter) ? charFreqMap[currentLetter] : 0;

        charFreqMap[currentLetter] = frequency + 1;
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (charFreqMap[s.at(i)] == 1)
        {
            index = i;
            break;
        }
    }

    return index;
}

int main()
{
    string s = "aabb";
    cout << firstUniqChar(s) << endl;

    return 0;
};
