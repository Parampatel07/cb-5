#include <stdio.h>
void main()
{

    int pre_num = 2, cur_num = 1, result, count;

    printf("%d ", pre_num);
    printf("%d ", cur_num);

    result = pre_num + cur_num;
    printf("%d ", result);
    
    for(count=0;result<3000;count++)
    {
        pre_num = cur_num;
        cur_num = result;
        result = pre_num + cur_num;
        printf("%d ", result);
    }
}