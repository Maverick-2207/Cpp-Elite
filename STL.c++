#include<iostream>//============= all about vectors!==================
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
#include<string>
#include<unordered_map>
#include<set>
#include<algorithm>
using namespace std;

int main(){

     //=================================== VECTORS ======================================================
    vector<int>vec={1,2,3,4};
    vec.push_back(5);
    vec.push_back(8);
    vec.push_back(9);
    vec.pop_back();
    
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    vec.pop_back();
    for(int i:vec){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"value at index 2 is:"<<vec.at(2)<<" or "<<vec[2]<<endl;

    cout<<"value at front:"<<vec.front()<<endl;
    cout<<"value at back:"<<vec.back()<<endl;

    vec.erase(vec.begin()+1);
    cout<<"value at front:"<<vec.front()<<endl;

    vec.insert(vec.begin()+3,100);// insert  an element at index 3
    for(int i:vec){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int>::iterator i;
    for( auto i=vec.rbegin();i!=vec.rend();i++){
        cout<<*i<<" ";// reverse printing the vector
    }
    cout<<endl;

//======================== list ================================
list<int>l;

l.push_back(1);
l.push_back(2);
l.push_back(3);
l.push_back(5);
l.push_front(90);
l.pop_back();

for(int i:l){
    cout<<i<<" ";
}
cout<<endl;

//=============================== deque ===================================
deque<int>q;

q.push_back(1);
q.push_back(2);
q.push_back(3);
q.push_back(5);
q.push_front(90);
q.pop_back();
cout<<"the given dequeue is :"<<endl;

for(int i:q){
    cout<<i<<" ";
}
cout<<endl;

//================================ pair ==============================
pair<int,pair<char,int>>p={1,{'a',56}};
cout<<p.first<<endl;
cout<<p.second.first<<endl;
cout<<p.second.second<<endl;

vector<pair<int,int>>v={{1,2},{3,5},{6,8}};
for(auto p:v){
    cout<<p.first<<" "<<p.second<<endl;

}

cout<<endl;
//=================================== stack =================================

stack<int>s;

s.push(1);
s.push(23);
s.push(45);
s.push(67);


stack<int>s2;

s2.swap(s);//swapping the stacks!
cout<<"size of s:"<<s.size()<<endl;
cout<<"size of s2:"<<s2.size()<<endl;
//======================================== queue ============================
queue<int >q1;
q1.push(1);
q1.push(280);
q1.push(45);
q1.push(67);
cout<<"the given queue is :"<<endl;
while(!q1.empty()){
    cout<<q1.front()<<" ";
    q1.pop();
}
cout<<endl;
//rest: swap,empty,push,pop,front... all works same as previous one's!

//==================================== PRORITY QUEUE =========================

priority_queue<int>pq;// to store max element at the top
priority_queue<int, vector<int>,greater <int>>pq1;// to store min element at the top

pq1.push(1);
pq1.push(23);
pq1.push(45);
pq1.push(67);
cout<<"the given priority queue is :"<<endl;
while(!pq1.empty()){
    cout<<pq1.top()<<" ";
    pq1.pop();
}
cout<<endl;
pq.push(1);
pq.push(23);
pq.push(45);
pq.push(67);
cout<<"the given priority(reverse order)queue is :"<<endl;
while(!pq.empty()){
    cout<<pq.top()<<" ";
    pq.pop();
}
cout<<endl;
cout<<endl;
//===================================== MAPS ===time complexity O(logn)............hehehe! ============================
// This stores key value pairs in sorted{by keys}order!
map<string,int>m;

m["patty:"]= 79;
m["maverick:"]= 80;
m["maddy:"]= 70;
m["ira:"]=40;
m["jarvis:"]=100;

cout<<"map key value pairs are:-"<<endl;
for(auto i:m){
    cout<<i.first<<""<<i.second<<endl;
}
m.erase("maddy:");
m.insert({"Taj:",23});// returns this at the top acc to ascii values of the alphabets..
m.emplace("rocky:",56);

cout<<"map key value pairs after updation are:-"<<endl;
for(auto i:m){
    cout<<i.first<<""<<i.second<<endl;
}
cout<<"count for maverick= "<<m.count("maverick:")<<endl; // returns 1 as only one key exist named "maverick"

if(m.find("maddy:")!=m.end()){
    cout<<"maddy is present in map"<<endl;
}
else{
    cout<<"maddy is not present in map"<<endl;
}
//====================================== unordered_map(time comlexity=O(1))==================

unordered_map<string,int>m1;

m1["patty:"]= 79;
m1["maverick:"]= 80;
m1["maddy:"]= 70;
m1["ira:"]=40;
m1["jarvis:"]=100;

cout<<"unordered_map key value pairs are:-"<<endl;
for(auto it:m1){
    cout<<it.first<<""<<it.second<<endl;
}
m1.erase("maddy:");
m1.emplace("Taj:",23);// returns this at the top acc to ascii values of the alphabets..
m1.emplace("rocky:",56);

cout<<"unordered_map key value pairs after updation are:-"<<endl;
for(auto it:m1){
    cout<<it.first<<""<<it.second<<endl;
}
//========================================= SET =O(logn) ======================================

set<int>s1;
s1.insert(10);
s1.insert(60);
s1.insert(30);
s1.insert(40);
cout<<"elements of set:"<<endl;
for(auto i: s1){
    cout<<i<<" ";
}
cout<<endl;// rest all functions are same as map and un_ordered map for unordered_set!

//================================= sorting and other algorithms ===================(#include<algorithm>)

vector<int>vect ={1,3,5,2,4};
cout<<"the sorted vector is"<<endl;
sort(vect.begin(),vect.end());

for(auto i:vect){
    cout<<i<<" ";
}
cout<<endl;
cout<<"reverse sorted array! is="<<endl;
sort(vect.begin(),vect.end(),greater<int>());
for(auto i:vect){
    cout<<i<<" ";
}
cout<<endl;

cout<<"max element of the vector is:"<<*(max_element(vect.begin(),vect.end()))<<endl;

//================================== That's it! =============================





































































return 0;


} 