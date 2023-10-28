#include<iostream>
#include<vector>
using namespace std;

vector<int> Movezeros (vector<int> nums)
{
    int nonzero =0;
    for(int j = 0; j< nums.size() ;j++)
    {
        if(nums[j] != 0)
        {
            swap(nums[j], nums[nonzero]);
            nonzero++;
        }
    }
}
// void print(vector<int>ans,int n)
// {
//     for(int i = 0 ; i < n ; i++)
//     {
//         cout << ans[i] << " ";
//     }
//     cout << endl;
// }

int main()
{
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(4);
    nums.push_back(0);

    vector<int> answer = Movezeros(nums);
    cout<< answer;

    
    return 0;
}
















 