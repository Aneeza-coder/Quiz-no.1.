#include<iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the number of course enrollments: ";
    cin>>N;
    float fee_per_enrollment;
    double totalRevenue=0;
    int premiumCount=0;

    for(int i=0; i<N; i++)
    {
        cout<<"The fee per enrollment "<<i+1<<": ";
        cin>>fee_per_enrollment;
        totalRevenue+=fee_per_enrollment;
        
    if(fee_per_enrollment>2000)
    {
        cout<<"Premium Course: ";
        cin>>premiumCount;
    }
    
    cout<<"total Revenue is : "<<totalRevenue<<endl;
    cout<<"premium count is : "<<premiumCount<<endl;
    }
    return 0;
}