#ifndef ARPANET_H
#define ARPANET_H
// @author: Prof. Mirza
#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <list>
#include <map>
using namespace std;

class graph
{
public:
    graph(vector<string> nodes)
    {
        for (auto n : nodes)
        {
            adjlist[n] = list<string>();
        }
    }
    void addedge(string from, string to)
    {
        adjlist[from].push_back(to);
        adjlist[to].push_back(from);
    }
    void display()
    {
        cout << "display graph\n";
        for (auto n : adjlist)
        {
            cout << n.first << " : ";
            for (auto e : n.second)
            {
                cout << e << " ";
            }
            cout << endl;
        }
    }

    void bfs(string source);
    void shortest_path(string source, string destination);

private:
    map<string, list<string>> adjlist; // balanced bst
};
#endif