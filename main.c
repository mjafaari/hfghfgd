#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int i, j, n, m, time_min, time_sec, score, ch,lives, pacman_p[2][2], blinky_p[2][2], pinky_p[2][2], clyde_p[2][2], inky_p[2][2], pacman_d, blinky_d, pinky_d, clyde_d, inky_d, blinky_type, pinky_type, clyde_type, inky_type;
    scanf("%d %d", &n, &m);
    int table[n][m];
    for(j = 1; j <= n; j++)
        for(i = 1; i <= m; i++){
            scanf("%c", &ch);
            if(ch == '_')
                table[j - 1][i - 1] = 1;
            else if(ch == '#')
                table[j - 1][i - 1] = 2;
            else if(ch == '*')
                table[j - 1][i - 1] = 3;
            else if(ch == '^')
                table[j - 1][i - 1] = 4;
            else if(ch == 'O')
                table[j - 1][i - 1] = 5;
        }
    scanf("%d:%d %d", &time_min, &time_sec, &score);
    scanf("pacman: %d %d (%d,%d) (%d,%d)", &pacman_d, &lives, &pacman_p[0][0], &pacman_p[0][1], &pacman_p[1][0], &pacman_p[1][1]);
    scanf("blinky: %d %d (%d,%d) (%d,%d)", &blinky_d, &blinky_type, &blinky_p[0][0], &blinky_p[0][1], &blinky_p[1][0], &blinky_p[1][1]);
    scanf("pinky: %d %d (%d,%d) (%d,%d)", &pinky_d, &pinky_type, &pinky_p[0][0], &pinky_p[0][1], &pinky_p[1][0], &pinky_p[1][1]);
    scanf("clyde: %d %d (%d,%d) (%d,%d)", &clyde_d, &clyde_type, &clyde_p[0][0], &clyde_p[0][1], &clyde_p[1][0], &clyde_p[1][1]);
    scanf("inky: %d %d (%d,%d) (%d,%d)", &inky_d, &inky_type, &inky_p[0][0], &inky_p[0][1], &inky_p[1][0], &inky_p[1][1]);
    return 0;
}