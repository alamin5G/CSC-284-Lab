/**
 * @file 9AsscendingSort.cpp
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-05-18
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int apple[] = {10, 15, 8, 12};
    int temp;
    //sort(apple, apple + 4);

    for(auto i=0;i<4; i++){
        for(auto next = i+1; i<3;i++){
            if(apple[i]>apple[next])
            temp = apple[i];
            apple[i] = apple[next];
            apple[next] = temp;
        }
    }



    cout << "Apple after sorting: " ;
    for (int i = 0; i < 4; ++i)
    {
        cout << apple[i] << " ";
    }
    cout << endl;
    return 0;
}