#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int findContentChildren(vector<int>& g, vector<int>& s) { //s are cookies
	sort(g.begin(), g.end());
	sort(s.begin(), s.end());
	
	int ret_val = 0;
	for(int i=0; (i<g.size() && i<s.size() );i++)
		if( g[i] <= s[i] )
			ret_val++;

	return ret_val;	
}


int main(){

	vector<int> vect1 = {10,9,8,7};
	vector<int> vect2 = {5,6,7,8};
	cout<<findContentChildren(vect1,vect2)<<endl;
	return 0;

}
