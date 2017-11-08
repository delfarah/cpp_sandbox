#include <iostream>
#include <vector>
using namespace std;

vector<int>& moveZeroes(vector<int>& nums)
{
	auto boz = nums.begin();
	auto eoz = nums.begin();
	while(eoz !=nums.end()){
		for(auto i=nums.begin(); i!=nums.end();i++)
			cout<<*i<<' ';
		cout<<endl;
		
		//eoz++;
		if(*eoz==0){
			eoz++;
			continue;
		}
		
		int tmp = *eoz;
		*eoz = *boz;
		*boz = tmp;

		eoz++;
		boz++;
	}
	return nums;
}

int main()
{	
	vector<int> vect;
	vect.push_back(0);
	
	vector<int> vect2 = moveZeroes(vect);
	for(auto i=vect2.begin(); i!=vect2.end();i++)
		cout<<*i<<' ';
	cout<<endl;
	return 0;
}
