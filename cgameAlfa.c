#include <stdio.h>
#include <stdlib.h>

struct market {
        int index; /*depend on days*/
        int budget; /*budget is 80% of player's money*/
        int goods; 
};

struct player {
        int manuf;
        int bucks;
};

void time_flow
(struct market *market, int dindex, int dgoods, int *pmoney)
{
    market->index = dindex;
    market->budget = (*pmoney * 80) / 100;
    *pmoney = (*pmoney * 80) / 100;
    market->goods = dgoods;
    printf("%d, %d, %d\n",  market->index, market->budget, market->goods);
    return;
}

int main()
{
    struct market *market;
    struct player *player1;
    player1 = malloc(sizeof(struct player));
    market = malloc(sizeof(struct market));
    int dindex[] = {0, 1, 3, 5};
    int dgoods[] = {0, 100, 50, 20};
    player1->bucks = 300;
    int day = 0;
    player1->manuf = 1;
    player1->bucks = 300;
    for (day = 1; day < 4; day++) {
        time_flow(market, dindex[day], dgoods[day], &player1->bucks);
    }
    return 0;
}    
    
