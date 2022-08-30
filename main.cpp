#include <iostream>
#include <unordered_map>
#include "vector"
using namespace std;
class sulotions{
    public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int ,int> hashtable;//建立 hashmap 操作
        for (int i = 0; i < nums.size(); ++i) {
            auto it = hashtable.find(target -nums[i]);
            if (it !=hashtable.end()){  //如果找到了这样一个值
                return {(*it).first,i};
            }
            hashtable[nums[i]]=i;
        }
        return {};
    }
};
int main() {
    sulotions So;
    //vector<int> nums(10);//vector矢量，向量
    vector<int> nums ={9, 7, 15,18,10};
    int target=28;
    vector<int> vector;
    vector = So.twoSum(nums,target);
    cout<<"元素是："<< vector[0]<< endl;
    cout<<"元素是："<< vector[1]<< endl;
    return 0;
}
