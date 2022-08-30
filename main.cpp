#include <iostream>
#include <unordered_map>
#include "vector"
using namespace std;
class sulotions{
    public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int ,int> hashtable;//���� hashmap ����
        for (int i = 0; i < nums.size(); ++i) {
            auto it = hashtable.find(target -nums[i]);
            if (it !=hashtable.end()){  //����ҵ�������һ��ֵ
                return {(*it).first,i};
            }
            hashtable[nums[i]]=i;
        }
        return {};
    }
};
int main() {
    sulotions So;
    //vector<int> nums(10);//vectorʸ��������
    vector<int> nums ={9, 7, 15,18,10};
    int target=28;
    vector<int> vector;
    vector = So.twoSum(nums,target);
    cout<<"Ԫ���ǣ�"<< vector[0]<< endl;
    cout<<"Ԫ���ǣ�"<< vector[1]<< endl;
    return 0;
}
