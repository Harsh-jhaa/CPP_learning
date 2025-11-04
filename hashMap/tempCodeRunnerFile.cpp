   unordered_map<string,int> :: iterator it = umap.begin();
            while(it != umap.end()){
                cout<< it->first << " - " << it->second << endl;
                it++;
            }