#include<bits/stdc++.h>
#include<map>
using namespace std;
int main(){
    // creation of unordered map
          unordered_map<string,int> umap;
    // insertion in unordered map - method 1

            umap["apple"]=1;
            umap["mango"]=2;
            umap["banana"]=3;

    // insertion in unordered map - method 2
    umap.insert(make_pair("guava",4));
    // insertion in unordered map - method 3
    umap.insert({"kiwi",5});
    // insertion in unordered map - method 4
    pair<string,int> p = make_pair("orange",6);
    umap.insert(p);
    // insertion in unordered map - method 5
    pair<string,int> q("papaya",7);
    umap.insert(q);
    
// searching in unordered map

//cout<<umap["mango"]<<endl; // 2
//cout<<umap.at("banana")<<endl; // 3
//cout<<umap.size()<<endl; // 7

// cout<<umap.at("kela")<<endl; // this will give error as kela is not present in the map
// cout<<umap["kela"]<<endl; // this will create kela in the map with value 0, since kela is not present in the map

//cout<<umap.count("apple")<<endl; // 1  // apple present
// cout<<umap.count("fruit")<<endl; // 0   // fruit absent

umap.erase("papaya"); // removes papaya from the map


            // for(auto x:umap){
            //     cout<<x.first<<" - "<<x.second<<endl; 
            // }

            // iterator creation in unordered map

            unordered_map<string,int> :: iterator it = umap.begin();
            while(it != umap.end()){
                cout<< it->first << " - " << it->second << endl;
                it++;
            }


return 0;
}