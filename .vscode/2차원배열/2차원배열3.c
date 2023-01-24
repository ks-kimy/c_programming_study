#include <stdio.h>
#include <math.h>

void upDiceNum(int *dices, int num) // 주사위 숫자 배열과 돌렸을 때 나온 숫자를 파라미터로 받음
{
    dices[num - 1]++; // 해당 숫자에 대한 값의 -1 이 인덱스이니까 이부분을 1 증가시켜준다.
}

int decodeCount(int *dices)
{
    int flag = 0;               // 0번째 인덱스부터 시작
    for (int i = 0; i < 6; i++) //6개 있을 꺼니까
    {
        int numOfdices = dices[i];
        /* code */
        if (numOfdices == 3)
        {
            return (i + 1) * 1000 + 10000; // 해당 인덱스+1를 리턴 => 주사위의 값은 인덱스보다 +1 이므로
        }
        else if (numOfdices == 2)
        {
            return (i + 1) * 100 + 1000; // 해당 인덱스+1를 리턴
        }
        else
        {
            //중복된 숫자가 1개일 때는 가장 큰값을 찾아야 한다.
            if (i > flag)
            {
                flag = i; // 가장 큰값을 교체 해준다.
            }
        }
    }
    // 반복문 다돌았으면 중복된 숫자가 없고 다 한번씩 나왔다는 뜻이겠지?
    return (flag + 1 * 100);
}

int main()
{
    int A, B, C;
    int dices[6] = {0, 0, 0, 0, 0, 0}; // dice의 대한 배열

    /**
 * 1. A,B,C에 대한 integer 값 받기  
 */
    scanf("%d", &A);
    upDiceNum(dices, A);

    scanf("%d", &B);
    upDiceNum(dices, B);

    scanf("%d", &C);
    upDiceNum(dices, C);

    int award = decodeCount(dices); // award는 결과적으로 상금.

    printf("%d가 내가 받아야 할 상금 \n", award);

    return 0;
};
