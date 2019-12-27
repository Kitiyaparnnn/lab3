#include<iostream>

int main()
{
    float x=6,ans=0;
    //std::cout<<"Hello";
    while(x<=19)
    {
        ans=ans+(1/x);
        x++;
    }
    std::cout<<ans;
    return 0;
}