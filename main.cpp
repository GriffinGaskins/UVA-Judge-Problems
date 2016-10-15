// Griffin Gaksins
// 156

#include <map>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
typedef map<string, pair<string, int> > MMap;
int main(void){
	//  scrubbed, originial, count
	MMap myMap;
	string end = "#";
	string in;
	vector<string> ans;
	while(cin >> in && in.compare(end)){
		string scrub = in;
		transform(scrub.begin(), scrub.end(), scrub.begin(), ::tolower);
		sort(scrub.begin(), scrub.end());
		myMap[scrub].first=in;
		myMap[scrub].second++;
	}

	for (MMap::iterator i = myMap.begin(); i!=myMap.end(); ++i){
		if(i->second.second == 1){
			ans.push_back(i->second.first);
		}
	}
	
	sort(ans.begin(), ans.end());
	for(auto an : ans){
		cout << an << endl;
	}
	return 0;
}