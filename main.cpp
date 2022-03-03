#include <iostream>
using namespace std;

void my_sort(int list[], int n){
    int min, t;
    for(int i = 0; i < n; i++){
        min = i;
        for(int j = i+1; j < n; j++){
            if(list[j] < list[min])
                min = j;
        }
        t = list[i];
        list[i] = list[min];
        list[min] = t;
    }
}

int main(void)
{
    int list[10] = {23, 11, 15, 8, 17, 33, 7, 14, 19, 21};
    int i;

    my_sort(list, 10); // 배열 list의 원소 10개를 sort 하는 함수 (sort : 주어진 n개의 정수를 크기 순서대로 정렬)
    for(i = 0; i < 10; i++)
        cout << list[i] << "\n";

    return 0;
}