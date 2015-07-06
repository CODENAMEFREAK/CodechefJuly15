#include<stdio.h>

int solveCase(void)
{
    int numofdays, piecesperpackage,numofpackages=0;
    scanf("%d%d",&numofdays,&piecesperpackage);
    int requirement,remaining=piecesperpackage;
    for(int i=1;i<=numofdays;i++)
      {
         scanf("%d",&requirement);
        if(requirement == remaining)
        {
            numofpackages++;
            remaining = piecesperpackage;
            //No stale piece left
        }
        else if(requirement<remaining)
        {
            remaining=remaining-requirement-1;
            //Leave one stale piece
        }
        else if(requirement>remaining)
        {
            do
            {
            //first eat whatever pieces of bread left in current package
            requirement-=remaining;
            //this consume current one completely
            numofpackages++;
            //next package has all the pieces
            remaining = piecesperpackage;
            }while(requirement>=piecesperpackage);
            if(requirement>0)
            {
                remaining=remaining-requirement-1;
            }
        }


      }
    if(remaining!=piecesperpackage)
        numofpackages++;
    return numofpackages;
}

int main()
{
    int cases;
    scanf("%d",&cases);
    for(int i=1;i<=cases;i++)
        printf("%d\n",solveCase());
    return 0;
}
