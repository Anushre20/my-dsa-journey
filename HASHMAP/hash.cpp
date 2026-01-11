#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(){
    // creation
    unordered_map<string, int> m;

    // insertion 1
    pair<string, int> p = make_pair("apple",1);
    m.insert(p);

    // insertion 2 
    pair<string, int> p2("banana",2);
    m.insert(p2);

    // insertion 3
    m["mango"]=3;

    // overwrites the value as no duplicate keys are present
    m["mango"]=4;

    // search
    cout<<m["apple"]<<endl;
    cout<<m.at("banana")<<endl;

    cout<<m["unknownKey"]<<endl;  //since no such key is there but this format will insert the key with a default 0 value

    cout<<m.at("unknownKey")<<endl; // this will give an error as no such key is present but for this time 0 as above has created it 


    // size
    cout<<m.size()<<endl;

    // check presence
    cout << m.count("bro")<<endl;

    // erase
    m.erase("banana");

    cout<<m.size()<<endl;


    // m.clear();
    // cout<<m.size()<<endl;

    // to traverse
    for(const auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    // iterator 
    unordered_map<string, int> :: iterator it = m.begin();
    while(it !=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }

}