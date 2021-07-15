#include<bits/stdc++.h>
using namespace std;
void ExplainList(){
    list<int>ls;
    ls.push_back(2); //{2}
    ls.emplace_back(3); //{2,3}
    ls.push_front(5); //{5,2,3}
    ls.emplace_front(); //{2,3}

}
void Explain_dq(){
    deque<int>dq;
    dq.push_back(1);  //{1}
    dq.emplace_back(2); //{1,2}
    dq.push_front(4); //{4,1,2}
    dq.emplace_front(3); //{3,4,1,2}

    dq.pop_back(); //{3,4,1}
    dq.pop_front(); // {4,1}

    dq.back();
    dq.front();
    
    //rest of the function same as vector->begin,end,clear,insert,swap,rbegin,rend;
}
void Explain_Stack(){
    stack<int>st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.emplace(7); //{7,6,5,4,3,2}

    cout<<st.top()<<endl; //prints 7;
    st.pop();
    cout<<st.top()<<endl; //prints 6;

    cout<<st.size()<<endl; // 5 
    cout<<st.empty()<<endl;

    stack<int>st1,st2;
    st1.swap(st2);

}
void Explain_queue(){
    queue<int>q;
    q.push(2);
    q.push(4);
    q.push(6);// {2,4,6}

    q.back() +=5;
    cout<<q.back()<<endl; //prints 11;

    cout<<q.front()<<endl; // 2
    q.pop(); // 2
    cout<<q.front()<<endl; //4

    // swap is same as stack;

}
void Priority_queue(){
    priority_queue<int>pq;
    pq.push(5); //{5}
    pq.push(2); // {5,2}
    pq.push(8); //{8,5,2}
    pq.emplace(10);//{10,8,5,2}//ata decreasing order a push hoi element;so boro value always top a asbe

    cout<<pq.top()<<endl;//10
    pq.pop(); //10
    cout<<pq.top()<<endl;//8

    //size,swap,empty function same as others
    
    // so peiority queue always decreasing order a element push kore so jodi amra increasing order a korte jai thle syntax->
    priority_queue<int, vector<int>,greater<int>>pq;
    pq.push(5); //{5}
    pq.push(2); //{2,5}
    pq.push(8); //{2,5,8}
    pq.push(10); // {2,5,8,10}
    cout<<pq.top()<<endl; //prints 2;
}
void Explain_set(){
    set<int>s; // set always insert element in sorted order and unique element like onr element will never come 2nd times.
    s.insert(1); //{1}
    s.insert(2)// {1,2}
    s.insert(2);//{1,2}
    s.insert(4); //{1,2,4}
    s.emplace(3); // {1,2,3,4}

    // rend,size,begin,end and all functions are same as other.

    auto it = s.find(3);// return true

    auto it = s.find(7); // it dose not exist in set so it will find upto set end;
    
    s.erase(4); //it will erase 4 and will take logarithmic time;

    int cnt = s.count(1);
    cout<<cnt<<endl; // prints 1;

    auto it = s.find(3);
    s.erase(it); //this will be done in constant time
    
    // {1,2,3,4,5}
    auto it1 = s.find(2);
    auto it2 = s.find(5);
    s.erase(it1,it2); //after erase {1,5}

    // lower bound and upper bound->(syntax)->
    auto it = s.lower_bound(2);
    auto it = s.upper_bound(3);
}

void MultiSet(){
    // everything is similar as set but the difference is store the duplicate element also or repeatative element also;
    multiset<int>ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(1);
    ms.insert(2); // {1,1,2,2}
    
    ms.erase(1); // all 1 will be erased
    ms.find(ms.erase(1)); // only single 1 will be erased

    // functions are similar to other
    int cnt = ms.count(1); // it will gives us the number of 1 occurs in a multiset

    ms.erase(ms.find(1),ms.find(1)+2);

}

void Explain_Uset(){
    //1. it use to reduce complexity coz it has a better complexity than set.logarithimic complexity it has. 2.its not use all the function that explain above;it supports lower and upper bounf function.
    unordered_set<int>s; //syntax // others are similar as set.
    // it   has low complexity coz it dose not store the element in sorted order so time complexity is constant.

}

void Explain_map(){
    //{key,value}
    map<int,int>mpp;
    map<int , pair<int,int>>mpp; // one key and double value can be store from this syntax
    map<pair<int,int>,int>mpp; // two key and single value can be store from this syntax

    mpp[1]=2;
    mapp.emplace{{3,1}}
    mapp.insert{{2,4}}
    // {1,2}
    // {2,4}
    // {3,1} // it will store as a sorted key manner

    // map<pair<int,int>,int>mpp;->this initialization;
    mpp[{2,3}] = 10;

    // travesre the map->
    for(auto it:map){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<mpp[1]<<endl;// it will print 2
    cout<<mpp[5]<<endl; // it will print 0 since nothing have in position 5

    auto it = mpp.find(3);
    cout<<*(it).second<<endl; // these are prints the second value of key 3. so prints 1;

    auto it =mpp.find(5); // it will point to end coz 5 is not present in set.
    
    // map takes logarithimic time;
}

void Explain_multiMap(){
    // it stores the similar value in one key .map cant support this proparty so we use multimap
    // multimap takes logarithimic time
}

void Explain_unordered_map(){
    // it stores element without sorted order;
    // takes constant time
}
void Explain_extra(){
    sort(arr,arr+n); //sort the full array.
    sort(arr+2.arr+4); //sort the 2nd to 4th element and last is not included
    sort(arr,arr+n,greater<int>);//it will sort in decending order

    int num =7;
    int cnt = __builtin_popcountll();

    long long num = 142636438293635
    int cnt = __builtin_popcountll(); //its count the repeatative element 

    // dictionary order ->number of permutation;

    string s="123";
     do{
        cout<<s<<endl;
     }while(next_permutation(s.begin(),s.end()))
    //  output->   123
    //             132
    //             213
    //             231
    //             312
    //             321     

    int maxi = *max_element(arr,arr+n);//returns the max element in the array
}

int main(){
    
    return 0;
}