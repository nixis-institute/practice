#include "iostream"
using namespace std;
int main()
{
    int day;
    cout<<"enter the day";
    cin>>day;
    switch(day)
    {
        case 1:cout<<"monday";break;
        case 2:cout<<"tuesday";break;
        case 3:cout<<"wednesday";break;
        case 4:cout<<"tuesday";break;
        case 5:cout<<"friday";break;
        case 6:cout<<"saturday";break;
        case 7:cout<<"sunday";break;
        default:cout<<"you enter a wrong day";
    }
    
    return 0;
}
