#include<iostream>

int main()
{
    float x=2,ans=0;
    //std::cout<<"Hello";
    while(x<=69)
    {
        ans=ans+(1/x);
        x++;
    }
    std::cout<<ans;
    return 0;
}