#include "Configuration.h"

int main() {
    sscanf("config.txt","%s",fileName);
    loadConfig();
    if (mapLenght != 20) {
        printf("Map lenght not set \n");
        return -1;
    }
    // map test
    if (map[0] != '.'){
        printf("Map properties not set \n");
        return -1;
    }
    //max dice role
    if (maxDiceRole != 10 ) {
        printf("Map properties not set \n");
        return -1;
    }
    if (teleporters[0].startPoint != 3){
        printf("Teleporter gone wrong \n");
        printf("Teleporter start point %d",teleporters[0].startPoint);
        return -1;
    }
    freeTeleporters();
    printf("Pass all test,gratio!\n");
    return 0;
}