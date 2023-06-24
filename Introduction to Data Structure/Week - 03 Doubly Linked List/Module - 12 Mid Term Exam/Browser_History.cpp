#include <bits/stdc++.h>
using namespace std;

int main()
{
      list<string> mylist;
      string s;
      while (1)
      {
            cin >> s;
            if (s == "end")
            {
                  break;
            }
            mylist.push_back(s);
      }

      int t;
      cin >> t;
      cin.ignore();

      auto current_node = mylist.begin();

      while (t--)
      {
            string command;
            getline(cin, command);

            if (command.substr(0, 5) == "visit")
            {
                  string visit = command.substr(6, -1); // 6 theke baki ongsho

                  auto it = find(mylist.begin(), mylist.end(), visit);

                  if (it != mylist.end()) // found
                  {
                        current_node = it;
                        cout << *current_node << endl; // derefarence
                  }
                  else
                  {
                        cout << "Not Available" << endl;
                  }
            }
            else if (command == "next")
            {
                  current_node++;
                  if (current_node == mylist.end())
                  {

                        cout << "Not Available" << endl;
                        current_node--;
                  }
                  else
                  {
                        cout << *current_node << endl;
                  }
            }
            else if (command == "prev")
            {
                  if (current_node == mylist.begin()) // current node phitron a ache
                  {
                        cout << "Not Available" << endl;
                  }
                  else
                  {
                        current_node--;                // previous node
                        cout << *current_node << endl; // google
                  }
            }
      }

      return 0;
}
