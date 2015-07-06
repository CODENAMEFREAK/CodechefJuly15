#include<stdio.h>

/**
    Colors: black, blue, red, green, yellow, orange
    Sides: front, back, left, right, top, bottom
*/

void solveCases(void)
{
    char box[6];
    char colorSTR[7];
    for(int i=0;i<6;i++)
    {
        scanf("%s", colorSTR);
        if(colorSTR[0]=='b')
        {
            *(box+i)=colorSTR[2];
        }
        else
        {
            *(box+i)=colorSTR[0];
        }
    }

    if(box[0]==box[4])
        {
            if ( (box[0]== box[2]) || (box[0]==box[3]) )
            {
                printf("YES\n");
                return;
            }
        }
    if(box[0]==box[5])
    {
         if ( (box[0]== box[2]) || (box[0]==box[3]) )
            {
                printf("YES\n");
                return;
            }
    }
    if(box[1]==box[4])
    {
        if((box[1]==box[2])||(box[1]==box[3]))
        {
            printf("YES\n");
            return;
        }
    }
    if(box[1]==box[5])
    {
        if((box[1]==box[2])||(box[1]==box[3]))
        {
            printf("YES\n");
            return;
        }
    }
    printf("NO\n");
    return;

}

int main()
{
    int cases;
    scanf("%d",&cases);
    for(int i=1;i<=cases;i++)
    {
           solveCases();
    }
    return 0;
}
