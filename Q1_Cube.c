#include<stdio.h>

 typedef enum  {blue=0 ,black=1, red=2, green=3,yellow=4,orange=5}COLORS;
typedef enum  {front=0,back=1,left=2,right=3,top=4,bottom=5}FACES;

int checkAdjacent(COLORS color, COLORS face[])
{
    for(FACES i =front; i<=bottom; i++)
    {
        if(face[i]==color)
        {
           if(face[(i+2)%6]==color || face[(i+3)%6]==color)
           {
                return ((face[(i+4)%6]==color)||(face[(i+5)%6]==color));
           }
           if(face[(i+4)%6]==color || face[(i+5)%6]==color)
           {
                return ((face[(i+2)%6]==color)||(face[(i+3)%6]==color));
           }
        }

    }
    return 0;
}

char * solveCase()
{
    int colorFrequecy[6]={0,0,0,0,0,0};
    COLORS face[6];
    char colorString[6];
    for(FACES i=front;i<=bottom; i++)
    {
        scanf("%s",colorString);

        switch(colorString[0])
        {
            case 'r':{face[i]=red; break; }
            case 'y':{face[i]=yellow;break;}
            case 'o':{face[i]=orange;break;}
            case 'g':{face[i]=green;break;}
            case 'b':{face[i]=(colorString[2]=='u')?blue:black;break; }
        }
    printf("%d -> %d\n",i,face[i]);
        colorFrequecy[face[i]]++;
    }

    for(FACES i=front;i<=bottom;i++)
    {
        printf("%d -> %d\n",i,face[i]);
        /*switch(faces[i])
        {
            case red: {printf("RED\n");break;}
            case yellow: {printf("YELLOW\n");break;}
            case orange: {printf("ORANGE\n");break;}
            case green: {printf("GREEN\n");break;}
            case blue: {printf("BLUE\n");break;}
            case black: {printf("BLACK\n");break;}
        }*/
    }


    for(int i=blue;i<=orange;i++)
    {
        if(colorFrequecy[i]>=3)
        {
            if(checkAdjacent(i,face))
            {
                return "YES";
            }
        }
    }
    return "NO";

}
int main()
{
    int cases =0;
    scanf("%d",&cases);

    for(int i=1;i<=cases;i++)
    {
        printf("%s",solveCase());
    }
}
