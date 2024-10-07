#include <iostream>
#include <vector>
using namespace std;
vector<int> Quick_Sort(vector<int> arr){

	if (arr.size()<2){
		return arr;
	}
	int pivot=arr[0];
	vector<int> left,right;
	for (int i = 0 ; i<arr.size();i++){
		if (arr[i]<pivot){
			left.push_back(arr[i]);
		}
		if (arr[i]>=pivot){
			right.push_back(arr[i]);
		}
	}
	left=Quick_Sort(left);
	right=Quick_Sort(right);
	left.push_back(pivot);
	left.insert(left.end(),right.begin(),left.end());
	return left;
}
int main(){
	vector<int> m = {2, 3, 4, 5, 6, 71, 2, 3, -1};
	vector<int> sort=Quick_Sort(m)
	for(int i=0;i<sort.size();i++){
		cout<<sort[i]<<" "
		
	}
}
