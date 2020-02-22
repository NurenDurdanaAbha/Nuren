#include <bits/stdc++.h>
using namespace std;
int x[26];
char s[100][100];

int main()
{
    int tests, n, m;

    scanf("%d",&tests);

    while(tests--)
        {
        memset(x, 0,sizeof(x));
        memset(s, 0,sizeof(s));
        scanf("%d%d",&n,&m);

        for(int i = 1;i <= n;i++)
            {
            for(int j = 1;j <= m;j++)
            {
                cin >> s[i][j];
            }
        }

        for(int i = 1;i <= n;i++)
            {
            for(int j = 1;j <= m;j++)
                {
                if(s[i][j] >= 'A' && s[i][j] <= 'Z')
                {
                        if(s[i-1][j-1] == '*')
                             x[s[i][j] - 'A']++;
                        if(s[i-1][j] == '*')
                            x[s[i][j] - 'A']++;
                        if(s[i-1][j+1] == '*')
                            x[s[i][j]- 'A']++;
                        if(s[i][j+1] == '*')
                            x[s[i][j]- 'A']++;
                        if(s[i][j-1] == '*')
                            x[s[i][j]- 'A']++;
                        if(s[i+1][j-1] == '*')
                            x[s[i][j]- 'A']++;
                        if(s[i+1][j] == '*')
                            x[s[i][j]- 'A']++;
                        if(s[i+1][j+1] == '*')
                            x[s[i][j]- 'A']++;
                }
            }
        }
        int oka = -1, ma = 0;
        for(int i = 0;i < 26;i++) {

            if(x[i] > ma)
            {
                oka = i;
                ma = x[i];
            }
        }
        char ans = char(oka + 65);
        if(oka != -1)
            printf("%c\n",ans);
        else
            printf("Ajob na?\n");
    }

    return 0;

}
