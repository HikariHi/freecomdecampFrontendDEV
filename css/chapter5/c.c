#include<stdio.h>
#include<string.h>

int main()
{
    char name[15];
    char path[15];
    char paths[15] = "forest";
    char paths2[15] = "castle";
    printf("Enter you adventure name! \n");
    scanf("%15s",name);
    printf("Hello %15s \n", name);
    
    printf("%15s, choose a path you want to go through:\n");
    printf("the forest / the castle \n");
    scanf("%15s", path);
    
    if (strcmp(path, paths) == 0 ) {
    printf("That sounds as a good choice, isnt?");
    }
    if (strcmp(path, paths2) == 0) {
    printf("That sounds as a fun and mysterious path, dont you think?"); 
    }
    else {
    printf("Syntax error");
    }
    
    
    return 0;
}
