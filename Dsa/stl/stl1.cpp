#include <bits/stdc++.h>
using namespace std;
void learnPairs()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second;
    cout << endl;

    pair<int, pair<int, int>> p2 = {1, {2, 3}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second;
    cout << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[0].first << " " << arr[0].second << " " << arr[2].second;
    cout << endl;
}

void learnVector()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> v1(5, 100); //[100,100,100,100,100]
    vector<int> v2(5);      //[0,0,0,0,0]
    vector<int> v3(v1);

    vector<int>::iterator it = v.begin(); // points to the base address of vector array
    it++;                                 // incement address by 1
    cout << *(it) << " ";                 // * is used to get value at the pointed adress
    it = it + 2;                          // incement address by 2
    cout << *(it) << " ";
    // vector<int>::iterator it = v.end(); // points to last of vector ie. after last array element
    cout << endl;
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    // v.erase(v.begin()); // 2 3 4 5
    v.erase(v.begin() + 2, v.begin() + 4); // start end range to erase
    cout << "After Erasing : ";
    for (auto it : v)
    {
        cout << it << " ";
    }

    cout << endl;
    cout << "Insert in a vector : ";
    vector<int> vi(2, 100);           // 100 2 times in empty vector vi
    vi.insert(vi.begin(), 300);       // insert 300 at begining
    vi.insert(vi.begin() + 1, 2, 10); // insert 100 2 times from vi[1]

    vector<int> copy(2, 50);
    vi.insert(vi.begin(), copy.begin(), copy.end()); // insert copy array into vi withing range given
    for (auto it : vi)
    {
        cout << it << " ";
    }
    cout << "\nsize of vector " << vi.size() << "\n";
    vi.pop_back();      // remove from last
    vi.swap(copy);      // swap vectors with each other
    vi.clear();         // clears the vector
    cout << vi.empty(); // show vector is empt or not

    // behind the scenes for vector singly linked list is used
}
void learnList()
{
    // behind the scene doubly linked list is used for lists
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(5);
    ls.emplace_front(1);
    ls.push_front(9);
    for (auto it : ls)
    {
        cout << it << " ";
    }
}
void learnDeque()
{
    deque<int> dq;
    dq.emplace_back(1);
    dq.push_back(2);
    dq.emplace_front(3);
    dq.emplace_front(9);
    dq.pop_back();
    dq.pop_front();
    cout << dq.back() << " "; // gives last element
    cout << dq.front();       // gives front element
}
void learnStack()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.emplace(6);
    cout << st.top() << endl;
    st.pop();
    cout << st.size() << endl;
    cout << st.empty();
    stack<int> st1, st2;
    st1.swap(st2);
    // lifo
}
void learnQueue()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.emplace(4);
    q.back() += 5; // add 5 to last element
    cout << q.back() << endl;
    cout << q.front() << endl;
    q.pop();
    cout << q.front();
    // fifo
}
void learnPriorityQueue()
{
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10); //[10,8,5,2] by default priority queue keep largest at top
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

    // using min heap keep minimum at top
    priority_queue<int, vector<int>, greater<int>> mpq;
    mpq.push(5);
    mpq.push(2);
    mpq.push(8);
    mpq.emplace(10);
    cout << mpq.top() << endl;
}
void learnSet()
{
    // unique and sorted
    set<int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(3);
    st.insert(4);
    st.insert(3);

    auto it = st.find(3); // it points to address where value is 3
    auto it = st.find(6); // it points to st.end() as its not in set
    st.erase(5);          // delete in log n time
    int cnt = st.count(3);
    auto it = st.find(3);
    st.erase(it);
    auto it1 = st.find(1);
    auto it2 = st.find(4);
    st.erase(it1, it2);
    auto it = st.upper_bound(2);
    auto it = st.lower_bound(3);
}
void learnMultiset()
{
    // store multiple occurances in set
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.erase(1);
    int cnt = ms.count(1);
    ms.erase(ms.find(1));
    auto it1 = ms.find(1);
    auto it2 = it1;
    advance(it2, 2);
    ms.erase(it1, it2);
}
void learnUnorderedSet()
{
    // unorderd not sorted, but unique
    // lowerbound, upperbound not works here
}
void learnMap()
{
    // map store unique keys in sorted order
    // in multimap you can keep multiple same keys also
    // UnorderdMap : not sorted but have unique keys
    map<int, int> mp;
    map<int, pair<int, int>> mpp;
    map<pair<int, int>, int> mpm;
    mp[1] = 2;
    mp.emplace(3, 1);
    mp.insert({2, 4});
    mpm[{2, 3}] = 10;
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
    cout << mp[1]; // 2
    cout << mp[5]; // 0 or null
    auto it = mp.find(3);
    cout << it->second;
    auto it = mp.find(5);
    auto it = mp.lower_bound(2);
    auto it = mp.upper_bound(3);
}
// comparing to pairs is equal or not
bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
    {
        return true;
    }
    else if (p1.second == p2.second)
    {
        if (p1.first > p2.second)
            return true;
    }
    return false;
}
void learnAddtionalStlAlgo()
{
    vector<int> v;
    v.push_back(8);
    v.push_back(3);
    v.push_back(9);
    v.push_back(1);
    int a[] = {1, 5, 7, 2, 3, 6};
    int n = sizeof(a) / sizeof(a[0]);
    cout << n << endl;
    sort(a, a + n);
    sort(v.begin(), v.end());
    sort(a + 2, a + 4);             // sort some portion only
    sort(a, a + n, greater<int>()); // sort in descending order
    pair<int, int> arr[] = {{1, 2}, {2, 1}, {4, 1}};
    int np = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + np, comp); // comparison based sort
    // comparison conditions: sort according to second element ie second element of pair in increasing order
    // if same second element, then sort first element in descending order
    int num = 7;
    int cnt = __builtin_popcount(num); // gives total number of set bits in 7 ie. 1 1 1 ie 3 setbits
    long long llnum = 165786578687;
    int llcnt = __builtin_popcountll(llnum); // for long int values

    string s = "123";
    sort(s.begin(), s.end());
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end())); // gives all possible permutation of this string

    int maxi = *max_element(a, a + n); // gives maximum of array or vector
}
int main()
{
    // learnPairs();
    // learnVector();
    // learnList();
    // learnDeque();
    // learnStack();
    // learnQueue();
    // learnPriorityQueue();
    // learnSet();
    // learnMultiset();
    // learnUnorderedSet();
    // learnMap();
    learnAddtionalStlAlgo();
}