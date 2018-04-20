#include"iostream"
#include<string.h>
using namespace std;
void WordCount(char path[]);  
void CharacterCount(char path[]);    
void sentenceCount(char path[]);  
void other(char path[]);  
int main()
{
    char input[100],path[50];
    gets(input);
    int count=strlen(input);
    strncpy(path, input + 10,  count - 10);
    path[count - 9] = '\0';
    int check = 1;
    while (check)
    {
        int i=8;
        if( (input[i] == '-') && (input[i + 1] == 'c') )
        {
           CharacterCount(path);
           break;

        }

        if( (input[i] == '-') && (input[i + 1] == 'w') )
        {
           WordCount(path);
           break;

        }

        if( (input[i] == '-') && (input[i + 1] == 's') )
        {
           sentenceCount(path);
           break;

        }

        if( (input[i] == '-') && (input[i + 1] == 'o') )
        {
           other(path);
           break;

        }
    }
    system("pause");
    return 0;


}
void WordCount(char path[]) 
{
    FILE *fp;
    int w = 0;
    char num;
    char *path3 = path;
    int k = strlen(path);
    *(path3 + k - 1) = '\0';
    if ( (fp = fopen(path3, "r") ) == NULL )
    {
       printf("file read failed.");
       exit(0);
    }
    num = fgetc(fp);
    while (num != EOF)
    {
       if ( (num >= 'a' && num  <= 'z') || (num >= 'A' && num <= 'Z') || (num >= '0' && num <= '9') )
        {
           while ( (num >= 'a' && num <= 'z') || (num >= 'A' && num <= 'Z') || (num >= '0' && num <= '9') || num == '_' )
            {
              num = fgetc(fp);
            }
           w++;
           num = fgetc(fp);
        }
        else
        {
           num = fgetc(fp);
        }
    }

    printf("dancishu £º%d.\n", w);
    fclose(fp);

}

void CharacterCount(char path[]) 
{
    FILE *fp=NULL;
    int c = 0;
    char num;
    cout << path<<endl;
    char *path3 = path;
    int k = strlen(path);
    *(path3 + k-1) = '\0';
    if ( (fp = fopen(path3 , "r") ) == NULL )
    {
       printf("file read failed.");
       exit(0);
    }
    num = fgetc(fp);
    while (num != EOF)
    {
       c++;
       num = fgetc(fp);
    }
    cout << "zifushu £º" << c << endl;
    c--;
    fclose(fp);
}


void sentenceCount(char path[]) 
{
    FILE *fp;
    int s = 1;
    char num;
    char *path3 = path;
    int k = strlen(path);
    *(path3 + k - 1) = '\0';
    if ( (fp = fopen(path3, "r") ) == NULL )
    {
       printf("file read failed.");
       exit(0);
    }
    num = fgetc(fp);
    while (num != EOF)
    {
        if (num == '\n')
        {
           s++;
           num = fgetc(fp);
        }

        else
        {
           num = fgetc(fp);
        }
    }
    s--;
    printf("juzishu£º%d.\n", s);
    fclose(fp);


}

void other(char path[])  
{
    FILE *fp;
    char num;
    char *path3 = path;
    int k = strlen(path);
    *(path3 + k - 1) = '\0';
    int d = 0, b = 0, z = 0;
    if ( (fp = fopen(path3, "r") ) == NULL )
    {
       printf("file read failed.");
       exit(0);
    }

    num = fgetc(fp);
    while (num != EOF)
    {
       if (num == '{' || num == '}')
        {
           b++;
           num = fgetc(fp);
        }
        else if (num == '\n')
        {
           num = fgetc(fp);
           while (num == '\n')
            {
               b++;
               num = fgetc(fp) ;

            }
        }
        else if (num == '/')
        {
           num = fgetc(fp);
           if (num == '/')
           while (num != '\n')
            {
               num = fgetc(fp) ;
            }

            z++;
            num = fgetc(fp) ;
        }
        else
        {
           d++;
           while (num != '{' && num != '}' && num != '\n' && num != '/' && num != EOF)
            {
              
			   num = fgetc(fp) ;
            }
        }

    }
     printf("daimahang  £º%d.\n", d);
     printf("konghang   £º%d.\n", b);
     printf("zhushihang £º%d.\n", z);
    fclose(fp);

}