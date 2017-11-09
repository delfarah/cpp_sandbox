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

int sumOfLeftLeaves(TreeNode* root) {
	int ret_val = 0;
	queue<TreeNode*> q;
	q.push(root);
	while(!q.empty()){
		TreeNode* cur = q.front();
		q.pop();
		
		if(!cur)
			continue;
		if(cur->left && !cur->left->left && !cur->left->right)
			ret_val += cur->left->val;
		
		q.push(cur->left);
		q.push(cur->right);
		
	}
	return ret_val;
}


int main(){
	
	//TreeNode* a0; a0->val=20;
	TreeNode a0(15); 
	
	TreeNode a1(9); 
	TreeNode a2(49);
	
	
	TreeNode a3(5); 
	TreeNode a4(12);
	TreeNode a5(23);
	TreeNode a6(52);
	
	TreeNode a7(15);
	TreeNode a8(50);
	
	a0.left = &a1;
	a0.right = &a2;
	
	
	a1.left = &a3;
	a1.right = &a4;
	
	
	
	a4.right = &a7;
	
	
	a2.left = &a5;
	a2.right = &a6;
	a6.left = &a8;
	
	
	cout<<sumOfLeftLeaves(&a0)<<endl;
	
	return 0;
}
