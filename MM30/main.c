#include <stdio.h>
#include <string.h>
int main()
{
    char n[102], m[102];
    int cycle[10]={1, 1, 4, 4, 2, 1, 1, 4, 4, 2};
    int Ans[10][4]={{0}, {1}, {6, 2, 4, 8}, {1, 3, 9, 7}, {6, 4}, {5}, {6}, {1, 7, 9, 3}, {6, 8, 4, 2},{1, 9}};
    int i;
    while(scanf("%s%s", n, m) == 2){
        int nlen = strlen(n), mlen = strlen(m);
        if(nlen == 1 && mlen == 1 && n[nlen-1] == '0' && m[mlen-1] == '0')  break;
        if(nlen == 1 && n[nlen-1] == '0')   puts("0");
        else if(mlen == 1 && m[mlen-1] == '0')  puts("1");
        else{
            int a = n[nlen-1]-'0', b = 0;
            for( i = 0; m[i]; i++){
                b = b*10+m[i]-'0';
                b %= cycle[a];
            }
            printf("%d\n", Ans[a][b]);
        }
    }
    return 0;
}
