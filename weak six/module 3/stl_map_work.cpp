#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;

    // insert a map
    // mp.insert({"Shakib Al Hasan ", 75});
    // mp.insert({"tamim iqbal", 19});
    // mp.insert({"shamim", 79});

    mp["sakib al hasan"] = 79;
    mp["tamim iqbal"] = 39;
    mp["shamim hossen"] = 79;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    if (mp.count("shamim"))
    {
        cout << "Ase" << endl;
    }
    else
    {
        cout << "Nai" << endl;
    }
    return 0;
}