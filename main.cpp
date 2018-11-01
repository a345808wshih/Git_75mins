#include <iostream>

using namespace std;

class Calculator {
private:

public:
	int sum(vector<int> &nums) {
	    int sum = 0;
		for (auto num : nums) {
		    sum += num;
		}
		return sum;
	}
	
	int aver(vector<int> &nums) {
	    return sum(nums) / nums.size();
	}

	int product(vector<int> &nums) {
	    int result = 1;
		for (auto num : nums) {
		    result *= num;
		}
		return result;
	}
	
	void printNums(vector<int> &nums) {
	    for (auto num : nums) {
		    cout << num << endl;
		}
	}

};


int main(int argc, char** argv) {
    // unit test for Calculator::sum()
	//               Calculator::aver()
	vector<int> nums = {1, 3};
	Calculator obj;
	cout << obj.sum(nums) << endl;
	cout << obj.aver(nums) << endl;


	cout << "Hello World" << endl;
	cout << "Hello WSHIH" << endl;
	cout << "Hello WSHIH again" << endl;
	cout << "This is the dev branch, merged dev into master" << endl;
	cout << "This is the fix branch" << endl;
	cout << "This is the master branch: stash test" << endl;
	
	cout << "modified by user2" << endl;
	cout << "rebase test: in master, this is bug-fixed" << endl;
	cout << "rebaced test: in dev, this is the new-feature" << endl;

	cout << "This is the fix2 branch" << endl;
	
	
	
	cout << "github test: This is feature1 from user1" << endl;
	cout << "github test: This is feature2 from user1" << endl;



	cout << "github test: feature1 from user2" << endl;
	cout << "github test: feature1 bugs fixed" << endl;


	return 0;
}
