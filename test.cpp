#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2){
	unordered_set<int> intersect;
	for(auto iter=nums1.begin();iter!=nums1.end();++iter){
		if(find( nums2.begin(), nums2.end() , *iter)!=nums2.end())
			intersect.insert(*iter);
	}
	
	
	vector<int> intersect_vect(intersect.size());
	copy(intersect.begin(), intersect.end(), intersect_vect.begin());
	return intersect_vect;
}
    
    
int main()
{	
	vector<int> nums1 = {};
	vector<int> nums2 = {5};
	
	auto r = intersection(nums1,nums2);
	for(auto iter=r.begin();iter!=r.end();++iter)
		cout<<*iter<<' ';
	cout<<endl;
	return 0;
}
