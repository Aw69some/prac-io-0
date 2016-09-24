#include <iostream>
#include <vector>
#include <list>


using namespace std;

template <class T>
int before_last(const T &x)
{
    if(x.size() < 2)
    {
        return 0;
    }
    typename T:: const_iterator ri = x.end();
    ri--;
    return *ri;
}

int ss(const vector<int> &V, const list<int> &L)
{
    return before_last(V)+before_last(L);
}

int main()
{
    vector <int> V;
    list <int> L;
    V.push_back(3);
    V.push_back(20);
    L.push_back(4);
    L.push_back(17);
    cout << ss(V, L) << endl;

    return 0;
}




