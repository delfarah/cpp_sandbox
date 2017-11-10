#include <iostream>
#include <vector>
#include <unordered_set>
#include <map>
#include <algorithm>
#include <string>
#include <queue>
#include <set>
using namespace std;


    bool containsDuplicate(vector<int>& nums) {
        set<int> mySet;
        for(auto n: nums){
			if(mySet.find(n) == mySet.end())
				mySet.insert(n);
			else
				return true;
		}
		
		return false;
    }


int main(){
	vector<int> a({1,4,2,6,6});
	cout<<containsDuplicate(a)<<endl;
	return 0;
}
