#include <stdio.h>
int a[50],b[50],c[100],i,j,k,n,m; 
int main()
{
    
    
    printf("Enter limit of first array: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
       
    printf("Enter limit of second array: ");
    scanf("%d",&m);
    printf("Enter elements: ");
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
      
    
    
    i=0;
    j=0;
    k=0;
    while((i<n)&&(j<m))
        {
            if(a[i]<=b[j])
                {
                 c[k]=a[i];
                 i++;
                 k++;
                }
                    
            else
                {
                 c[k]=b[j];
                 k++;
                 j++;
                }
                
        }        
    
    while(i<n)
        {
            c[k]=a[i];
            k++;
            i++;
        }
        while(j<m)
        {
            c[k]=b[j];
            k++;
            j++;
            
        }
    printf("Merged array is: ");
    for(i=0;i<n+m;i++)
    printf("%d  ",c[i]);
    
    return(0);    

}


