#include<stdio.h>

int main()
{
    char name[15];
    char path[15];
    char paths[15] = "forest";
    char paths2[15] = "castle";
    printf("Enter you adventure name! \n");
    scanf("%s",name);
    printf("Hello %s", name);
    
    printf("%s, choose a path you want to go through:\n");
    printf("the forerst / the castle");
    scanf("%s", path);
    
    if path == paths:
    printf("That sounds as a good choice, isnt?");
    if path == paths2:
    printf("That sounds as a fun and mysterious path, dont you think?");
    else:
    printf("Syntax error");
    
    
    return 0;
}
