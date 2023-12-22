
#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;
bool isBalanced(const std::string &s)
{
    std::stack<char> charStack;
    std::unordered_map<char, char> bracketMapping = {{')', '('}, {']', '['}, {'}', '{'}};

    for (char ch : s)
    {
        if (bracketMapping.find(ch) != bracketMapping.end())
        {
            char topElement = charStack.empty() ? '#' : charStack.top();
            charStack.pop();

            if (topElement != bracketMapping[ch])
            {
                return false;
            }
        }
        else
        {
            charStack.push(ch);
        }
    }

    return charStack.empty();
}
int main()
{
    int N;
    cin >> N;
    std::string inputString[N];
    bool result[N];

    for (int i = 0; i < N; i++)
    {
        std::string s;
        cin >> s;
        inputString[i] = s;

    }

    for (int i = 0; i < N; i++)
    {
        cout << isBalanced(inputString[i]) << '\n';
    }

    return 0;
}
