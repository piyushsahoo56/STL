// C++ STL
#include <bits/stdc++.h>
using namespace std;

// PAIR
void explainPair(){
    pair<int, int> p = {2, 4};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> g = {1, {3, 6}};
    cout << g.first << " " << g.second.second << " " << g.second.first << endl;

    pair<int, int> arr[] = {{2, 5}, {6, 2}, {8, 23}, {23, 1}};
    cout << arr[1].first << " " << arr[3].second << " " << endl;
}

// VECTOR
void explainVector()
{
    //vector is dynamic in nature.
    vector<int> v;
    v.push_back(2);
    v.emplace_back(6); // emplace_back is better than push_back.
    v.push_back(8);
    v.emplace_back(1);

    cout << v.at(0) << " " << v.at(1) << " " << v[2] << " "<< v.back() << endl;

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(2, 4);

    cout << vec.at(0).first << " " << vec.at(1).second << endl;

    vector<int> ve(5, 100); // container containing 5 instances of 100.

    vector<int> vect(5); // container of size 5 with some garbage value or 0 (depending upon compiler).

    vector<int> v1(5,20);
    vector<int> v2(v1);  //v2 becomes a copy of v1

    //iterator.....
    //v={2,6,8,1}
    vector<int>::iterator it = v.begin(); 
    it++;

    cout << *(it) << endl;

    vector<int>::iterator gt = v.end(); //v.end means position just after the last number
    gt--;
    cout << *(gt) << endl;

    for(vector<int>::iterator it = v.begin() ; it != v.end() ; it++){
        cout << *(it) << " " ;
    }
    cout << endl;
    //OR
    for(auto it = v.begin() ; it != v.end() ; it++){
        cout << *(it) << " ";
    }
    cout << endl;
    //OR
    for(auto it : v){
        cout << it << " ";
    }
    cout << endl;

    //{2,6,8,1}
    v.erase(v.begin()); // // {6,8,1}

    //{23,64,21,61,352,12}
    v.erase(v.begin()+1 , v.begin()+3); // // {23,61,352,12} [start,end)

    //Insert function
    vector<int> v3(2,100); //{100,100}
    v.insert(v.begin(), 300); //{300,100,100}
    v.insert(v.begin()+1, 2, 10); //{300,10,10,100,100}

    vector<int> copy(2,50); //{50,50}
    v.insert(v.begin(), copy.begin(),copy.end()); //{50,50,300,10,10,100,100}

    //{10,20}
    cout << v.size() ; // 2

    //{10,20,40}
    v.pop_back(); //{10,20}

    //v1 -> {10,20}
    //v2 -> {40,50}
    v1.swap(v2); //v1 -> {40,50} ; v2 -> {10,20}

    v.clear(); //clear the entire vector

    cout << v.empty(); // 0 mean not empty ; 1 means empty. 
}

//LIST
void explainList(){
    list<int> ls;
    ls.push_back(3); //{3}
    ls.emplace_back(6); //{3,6}
    ls.push_front(1); //{1,3,6}
    ls.emplace_front(9); //{9,1,3,6}

    for(auto v : ls){
        cout << v << " ";
    }
    //rest function are same as vector
    //begin, end, rbegin, rend, clear, insert, size, swap
}

//DEQUE
void explainDeque(){
    deque<int>dq;
    dq.push_back(1); //{1}
    dq.emplace_back(2); //{1,2}
    dq.push_front(4); //{4,1,2}
    dq.emplace_front(3); //{3,4,1,2}

    dq.pop_back(); //{3,4,1}
    dq.pop_front(); //{4,1}

    dq.back();
    dq.front();

    // rest function are same as vector
    // begin, end , rbegin, rend, clear, insert, size, swap

}

//STACK
void explainStack(){
    //LIFO = LAST IN FIRST OUT
    // all opertation are O(1)
    stack<int> st;
    st.push(1);//{1}
    st.push(2);//{2,1}
    st.push(13);//{13,2,1}
    st.emplace(6);//{6,13,2,1}
    st.emplace(9);//{9,6,13,2,1}

    cout << st.top() << endl; // prints 9    "**st[2] is invalid**"

    st.pop(); // st = {6,13,2,1}

    cout << st.top() << endl; // prints 6

    cout << st.size() << endl; // prints 4

    cout << st.empty() << endl; // shows if the stack is empty  " 0 means false and 1 means true "

    stack<int> st1,st2;
    st1.swap(st2); // swap st1 and st2

}

//QUEUE
void explainQueue(){
    //FIFO = FIRST IN FIRST OUT
    queue<int> q;
    q.push(1); //{1}
    q.emplace(2); //{1,2}
    q.emplace(4); //{1,2,4}

    q.back() += 5; //{1,2,9}

    cout << q.back() << endl; // prints 9

    cout << q.front() << endl; // prints 1

    q.pop(); //{2,9}

    cout << q.front(); // print 2

    // size, swap, empty are same as stack
}

//PRIORITY_QUEUE
void explainPQ(){
    //Maximum Heap
    //the largest character stays at the top 
    priority_queue<int> pq;
    
    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.push(8); //{8,5,2}
    pq.emplace(10); //{10,8,5,2}

    cout << pq.top() << endl; // prints 10

    pq.pop(); //{8,5,2}

    cout << pq.top() << endl; //prints 8 

    // Minimun Heap
    //the smalest character stays at the top
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(5); //{5}
    pq1.push(2); //{2,5}
    pq1.push(8); //{2,5,8}
    pq1.emplace(10); //{2,5,8,10}

    cout << pq1.top() << endl; // prints 2
    
    //size, swap, empty functions are same as others

    // time complex of push and pop = log n ......... top = O(1)
}

//SET
void explainSet(){
    //Sets stores everything in a sorted and unique
    set<int> st;
    st.insert(1); //{1}
    st.emplace(2); //{1,2}
    st.insert(2); //{1,2}
    st.insert(4); //{1,2,4}
    st.insert(3); //{1,2,3,4}

    // Functionality of insert in vector can be used also, that only increase efficiency
    // begin(), end(), rbegin(), rend(), size(), empty(), and swap() as those above

    //{1,2,3,4,5}
    auto it = st.find(3); // return an iterator which points to the 3

    //{1,2,3,4,5}
    auto it = st.find(6); // return st.end()... 

    //{1,2,3,4,5}
    st.erase(4); // delete the 4 

    int cnt = st.count(2); // shows if 1 is there in the set or not.
    
    auto it = st.find(3);
    st.erase(it); // it takes constant time

    //{1,2,3,4,5}
    auto it1 = s.find(2);
    auto it2 = s.find(4);
    st.erase(it1,it2); //{1,4,5}  [first,last)

    //lower_bound() and upper_bound() function works in the same way as in vector it does.
    // log n
    //syntax
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);

}

//MultiSet
void explainMultiSet(){
    // Everything is same as set
    // but stores duplicate element also
    //sorted
    
    multiset<int>ms;
    ms.insert(1); //{1}
    ms.emplace(1); //{1,1}
    ms.emplace(1); //{1,1,1}

    int cnt = ms.count(1); //conuts the numbers of 1
    cout << cnt;

    ms.erase(1); //erase all 1's

    ms.erase(ms.find(1)); //only a single 1 is erased

    ms.erase(ms.find(1),ms.find(1)+2);

    //rest all function are same as set
}

//UnorderedSet
void explainUset(){
    unordered_set<int> st;
    //lower_bound and upper_bound doesn't work rest all are same
    //As above it doesn't stores in any perticular order . 
    //unique but in a random order
    //It has better complexity than set in most of the cases, except some when collision happens     

}

//Map
void explainMap(){
    //log N
    // stores unique keys in sorted order
    map<int,int> mpp;
    //{keys,value}
    mpp[1] = 2; //{1,2}
    mpp.emplace(3,1); //{3,1}
    mpp.insert({2,4}); //{2,4}
    
/* {
        {1,2}
        {2,4}
        {3,1}
    } */

    map<pair<int,int>,int> mpp1;
    mpp1[{1,3}] = 10; //{{1,3},10}

    for(auto it : mpp){
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1]; // prints 2
    cout << mpp[5]; // prints 0 cause it doesn't exist

    auto it = mpp.find(3); //gives address
    cout << *(it).second;

    auto it = mpp.find(5); //mpp.end()

    //This is the syntax
    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);

    //erase , swap , size , empty are same as above.
}

//Multimap
void explainMultimap(){
    // everything is same as map, but it can store duplicate keys.
    // onlu mpp[key] cannot be used 
}

//UnorderedMaps
void explainUnorderedMap(){
    //same as set and unordered_set difference.
    // not sorted and no duplicate
    //O(N)
}

//Extra
void explainExtra(){
    int arr[4] = {2,4,6,1};
    sort(arr,arr+4);
    //vector
    sort(v.begin(), v.end());

    sort(a , a+n , greater<int>); //sort in desending order

    pair<int,int> a[] = {{1,2},{4,2},{5,8}};
    //sort according to the second element
    //if the second element is same, then sort according to the second element but in desencding
    sort{a,a+3,comp}; //comp = self written comperator aka boolean function
    //{4,2} , {1,2} , {5,8}

    int num = 7;
    int cnt = __builtin_popcount();

    long long num1 = 6237617825;
    int cnt1 = __builtin_popcountll();

    string s = "123";
    do{
        cout << s << endl;
    }while(next_permutation(s.begin(), s.end()));

    int maxi = *max_element(a,a+4); //without star gives us address
}

bool comp(pair<int,int>p1, pair<int,int>p2){
    if(p1.second < p2.second){
        return true;
    }
    if(p1.second > p2.second){
        return false;
    }

    if(p1.first < p2.first){
        return true;
    }
    return false;  
}

int main()
{
    
    return 0;
}