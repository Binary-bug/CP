#include<iostream>
#include<utility>
#include<algorithm>
#include<vector>
#include<string>
#include<map>

using namespace std;

int main(){
	string s;
	vector< pair<string,string> > shelf;
	map <string,int> bookorder;
	while(getline(cin,s) && s !="END"){
		
		string title,author;
		size_t s_len = s.size();
		size_t found = s.find(" by ");
		title = s.substr(1,(found-2));
		found += 4;
		author = s.substr(found);
		
		shelf.push_back(make_pair(author,title));
	}
	
	int shelfsize = shelf.size();
	sort(shelf.begin(),shelf.end());

	vector<bool> borrowed(shelfsize);
	vector<bool> returned(shelfsize);
	
	for(int i=0; i < shelfsize; ++i) bookorder[shelf[i].second] = i;
	
	while(cin >> s && s != "END"){
		
		
		string title;
		int first = -1;
		
		if(s != "SHELVE"){
		getchar();
		getline(cin,title);
		title = title.substr(1,title.size()-2);
		}

		if(s == "BORROW"){
			borrowed[bookorder[title]] = true;
			returned[bookorder[title]] = false;
		}
		if(s == "RETURN") returned[bookorder[title]] = true;
	
		if(s == "SHELVE"){			
			for(int i = 0; i < shelf.size(); ++i){
					if(returned[i]){
						if(first == -1)	cout << "Put \"" << shelf[i].second << "\" first" << endl;
						else cout << "Put \"" << shelf[i].second << "\" after " << "\""<<shelf[first].second<<"\"" << endl;
					
						first = i;
						returned[i] = borrowed[i] = false;
					}
					else if(!borrowed[i]) first = i;
			}	
		cout << "END" << endl;
		}
	}
	return 0;
}
		
			
