#include<stdio.h>

char * solveCase()
{
    char faces[6];
    char ch;
    for(int i=0;i<6;i++)
        {
            ch=getchar();
            printf("character %c\n",ch);
            switch(ch)
            {
                case 'b':{getchar();faces[i]=getchar(); break;}
                default:{faces[i]=ch; break;}
            }



        }
        for(int i=0;i<6;i++)
            printf("%c",faces[i]);
        if(faces[0]==faces[2])
        {
            if((faces[0]==faces[4])||(faces[0]==faces[5]))
                return "YES\n";
        }
        if(faces[0]== faces[3])
        {
            if((faces[0]==faces[4])||(faces[0]==faces[5]))
                return "YES\n";
        }
        if(faces[1]==faces[2])
        {
            if((faces[1]==faces[4])||(faces[1]==faces[5]))
                return "YES\n";
        }
        if(faces[1]== faces[3])
        {
            if((faces[1]==faces[4])||(faces[1]==faces[5]))
                return "YES\n";
        }

        return "NO\n";
}

int main()
{
    int cases;
    scanf("%d",&cases);
    getchar();
    for(int i=1;i<=cases;i++)
    {
        printf("%s",solveCase());
    }
}
