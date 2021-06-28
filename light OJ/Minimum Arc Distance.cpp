
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, ox, oy, ax, ay, bx, by;
    scanf("%d", &T);
    double OA, OB, AB, angle;
    for (int i = 1; i <= T; i++)
    {
        scanf("%d %d %d %d %d %d", &ox, &oy, &ax, &ay, &bx, &by);

        OA = sqrt(pow(ax - ox, 2) + pow(ay - oy, 2));
        OB = sqrt(pow(bx - ox, 2) + pow(by - oy, 2));
        AB = sqrt(pow(ax - bx, 2) + pow(ay - by, 2));

        angle = acos((pow(OA, 2) + pow(OB, 2) - pow(AB, 2)) / (2 * OA * OB));

        printf("Case %d: %.3lf\n", i, OA * angle);
    }
    return 0;
}
