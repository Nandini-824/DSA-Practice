#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n;
    cin >> n;

    queue<string> q;

    while(n--)
    {
        string operation;
        cin >> operation;

        if(operation == "ARRIVE")
        {
            string name;
            cin >> name;

            q.push(name);

            cout << "Arrived : " << name << endl;
        }
        else if(operation == "SERVE")
        {
            if(q.empty())
            {
                cout << "Serving : No patients" << endl;
            }
            else
            {
                cout << "Serving : " << q.front() << endl;
                q.pop();
            }
        }
        else if(operation == "QUEUE")
        {
            if(q.empty())
            {
                cout << "Waiting : No patients" << endl;
            }
            else
            {
                cout << "Waiting : ";

                queue<string> temp = q;

                while(!temp.empty())
                {
                    cout << temp.front();

                    temp.pop();

                    if(!temp.empty())
                        cout << " ";
                }

                cout << endl;
            }
        }
    }

    return 0;
}