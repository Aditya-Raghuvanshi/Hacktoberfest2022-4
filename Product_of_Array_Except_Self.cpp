#include<iostream>
using namespace std;

int main()
{
    int pro=1,size,flag=0;
    cout<<"Enter size of the array "<<endl;
    cin>>size;
    int nums[size],answer[size];
    for(int i=0;i<size;i++)
    {
        cin>>nums[i];
        if(nums[i]==0)
        {
            flag++;
            continue;
        }
        pro=pro*nums[i];
    }
    cout<<"resulted array is "<<endl;
    for(int i=0;i<size;i++)
    {
        if(flag==1&&nums[i]!=0)
            answer[i]=0;
        else if(flag==1&&nums[i]==0)
            answer[i]=pro;    
        else if(flag>1&&nums[i]==0||flag>1&&nums[i]!=0)
            answer[i]=0;
        else
            answer[i]=pro/nums[i];
        cout<<answer[i]<<" ";
    }
    return 0;
}
