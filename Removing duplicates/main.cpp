    #include <iostream>

    using namespace std;

    int main()
    {
        int nums[3]={1,1,2};
        int op[3];

        for(int i=0,k=0;i<3;i++,k++)
        {
            for(int j=1;j<3;j++)
            {
                if(nums[j]!=nums[i])
                {
                op[k]=nums[j];
                }
            }
        }
        for(int i=0;i<3;i++)
        {
            cout<<op[i];
        }
    }
