#include <iostream>
#include <string>
using namespace std;

string apply_rules(string s)
{
    string result = "";
    int current_number = 0;
    string current_statement = "";
    char current_operator = '\0'; // '\0' represents an empty character

    for (char ch : s)
    {
        if (isdigit(ch))
        {
            current_number = current_number * 10 + (ch - '0');
        }
        else if (isalpha(ch))
        {
            current_statement += ch;
        }
        else
        {
            if (current_number == 0)
            {
                current_number = 1;
            }
            while (current_number--)
            {
                result += current_statement;
            }
            current_statement = "";
            current_number = 0;
            current_operator = ch;
        }
    }

    // Adding the last statement
    if (current_number == 0)
    {
        current_number = 1;
    }
    while (current_number--)
    {
        result += current_statement;
    }

    // Adding the final operator
    result += current_operator;

    return result;
}

int main()
{
    string input_string;
    getline(cin, input_string);

    string output = apply_rules(input_string);
    cout << output << endl;

    return 0;
}
