// #define STR(x) #x
// #define STRLEN(x) strlen(x)
#define CONCAT(x, y) x##y

int main(){
//printf("%d", STRLEN(STR(12345)));
int x = 4;
int y = 5;
int CONCAT(x, y) = x + y;
printf("%d", xy);
}
