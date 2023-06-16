// 津津上初中了。妈妈认为津津应该更加用功学习，所以津津除了上学之外，还要参加妈妈为她报名的各科复习班。 
// 另外每周妈妈还会送她去学习朗诵、舞蹈和钢琴。但是津津如果一天上课超过八个小时就会不高兴，而且上得越久就会越不高兴。 
// 假设津津不会因为其它事不高兴，并且她的不高兴不会持续到第二天。请你帮忙检查一下津津下周的日程安排，看看下周她会不会不高兴；如果会的话，哪天最不高兴。 
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    
    int n1[7],n2[7],sum=0,max=0;
    int result = 0;
    //连续输入两个整数n1和n2，输入七次
    for (size_t i = 0; i < 7; i++)
    {
        //向两个数组里面输入数据
        cin >> n1[i] >> n2[i];
    }
    for (size_t i = 0; i < 7; i++)
    {
        sum = n1[i] + n2[i];
        if (sum>8)
        {
            if (sum>max)
            {
                max = sum;
                result = i+1;
            }
        }
    }
    cout << result;
    return 0;
}