#include <iostream>

using namespace std;

/*
 * N마리의 새가 나무에 앉아있고, 자연수를 배우기 원한다.
 *
 * 새들은 1부터 모든 자연수를 오름차순으로 노래한다.
 *
 * 어떤 숫자 K를 노래할 때, K마리의 새가 나무에서 하늘을 향해 날아간다.
 *
 * 만약, 현재 나무에 앉아있는 새의 수가 지금 불러야 하는 수 보다 작을 때는, 1부터 게임을 다시 시작한다.
 *
 * 나무에 앉아 있는 새의 수 N이 주어질 때, 하나의 수를 노래하는데 1이 걸린다고 하면, 모든 새가 날아가기까지 총 몇 초가 걸리는지 출력하는 프로그램을 작성하시오.
 */
int main()
{

    int bird = 0;
    int song = 0;
    int time = 0;

    cin >> bird;

    while(bird > 0)
    {
        if(bird - (song + 1) < 0)
            song = 1;
        else
            song++;

        bird -= song;

        time++;
    }

    cout << time;

    return 1;
}