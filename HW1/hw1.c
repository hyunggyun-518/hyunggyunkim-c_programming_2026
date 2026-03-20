#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int user, com;
    int myWin;
    int opponentNum;
    int win1, win2, win3;
    char *name[9] = {"", "플레이어", "철수", "영희", "민준", "지아", "현우", "수빈", "태양"};

    printf("====================================================\n");
    printf("               가위바위보 토너먼트\n");
    printf("====================================================\n\n");

    printf("[ 대진표 ]\n");
    printf("----------------------------------------------------\n\n");
    printf("8강\n");
    printf(" [1] 플레이어   vs  [2] 철수\n");
    printf(" [3] 영희       vs  [4] 민준\n");
    printf(" [5] 지아       vs  [6] 현우\n");
    printf(" [7] 수빈       vs  [8] 태양\n\n");
    printf("----------------------------------------------------\n");
    printf(" 당신은 [1] 플레이어입니다.\n");
    printf("----------------------------------------------------\n\n");

    /* 나머지 8강 경기들은 랜덤 진급 */
    if (rand() % 2 == 0)
        win1 = 3;   // 영희
    else
        win1 = 4;   // 민준

    if (rand() % 2 == 0)
        win2 = 5;   // 지아
    else
        win2 = 6;   // 현우

    if (rand() % 2 == 0)
        win3 = 7;   // 수빈
    else
        win3 = 8;   // 태양

    /* 8강 - 사용자 경기 */
    opponentNum = 2;

    while (1) {
        printf("====================================================\n");
        printf("8강  - 상대 : %s\n", name[opponentNum]);
        printf("====================================================\n");
        printf(" 1: 가위   2: 바위   3: 보\n");
        printf(" 선택 > ");

        scanf("%d", &user);

        if (user != 1 && user != 2 && user != 3) {
            printf("\n잘못된 입력입니다. 다시 입력하세요.\n\n");
            continue;
        }

        com = rand() % 3 + 1;

        printf("\n상대의 선택 > %d\n", com);

        if (user == com) {
            printf("비겼습니다! 재경기합니다.\n\n");
            continue;
        }
        else if ((user == 1 && com == 3) ||
                 (user == 2 && com == 1) ||
                 (user == 3 && com == 2)) {
            printf("이겼습니다!\n\n");
            myWin = 1;
            break;
        }
        else {
            printf("졌습니다!\n\n");
            myWin = 0;
            break;
        }
    }

    if (myWin == 0) {
        printf("토너먼트 탈락!\n");
        return 0;
    }

    /* 4강 - 사용자 경기 */
    opponentNum = win1;

    while (1) {
        printf("====================================================\n");
        printf("4강  - 상대 : %s\n", name[opponentNum]);
        printf("====================================================\n");
        printf(" 1: 가위   2: 바위   3: 보\n");
        printf(" 선택 > ");

        scanf("%d", &user);

        if (user != 1 && user != 2 && user != 3) {
            printf("\n잘못된 입력입니다. 다시 입력하세요.\n\n");
            continue;
        }

        com = rand() % 3 + 1;

        printf("\n상대의 선택 > %d\n", com);

        if (user == com) {
            printf("비겼습니다! 재경기합니다.\n\n");
            continue;
        }
        else if ((user == 1 && com == 3) ||
                 (user == 2 && com == 1) ||
                 (user == 3 && com == 2)) {
            printf("이겼습니다!\n\n");
            myWin = 1;
            break;
        }
        else {
            printf("졌습니다!\n\n");
            myWin = 0;
            break;
        }
    }

    if (myWin == 0) {
        printf("4강 탈락!\n");
        return 0;
    }

    /* 다른 4강 경기도 랜덤 진급 */
    if (rand() % 2 == 0)
        opponentNum = win2;
    else
        opponentNum = win3;

    /* 결승 */
    while (1) {
        printf("====================================================\n");
        printf("결승  - 상대 : %s\n", name[opponentNum]);
        printf("====================================================\n");
        printf(" 1: 가위   2: 바위   3: 보\n");
        printf(" 선택 > ");

        scanf("%d", &user);

        if (user != 1 && user != 2 && user != 3) {
            printf("\n잘못된 입력입니다. 다시 입력하세요.\n\n");
            continue;
        }

        com = rand() % 3 + 1;

        printf("\n상대의 선택 > %d\n", com);

        if (user == com) {
            printf("비겼습니다! 재경기합니다.\n\n");
            continue;
        }
        else if ((user == 1 && com == 3) ||
                 (user == 2 && com == 1) ||
                 (user == 3 && com == 2)) {
            printf("이겼습니다!\n\n");
            printf("축하합니다! 최종 우승입니다!\n");
            break;
        }
        else {
            printf("졌습니다!\n\n");
            printf("아쉽지만 준우승입니다.\n");
            break;
        }
    }

    return 0;
}