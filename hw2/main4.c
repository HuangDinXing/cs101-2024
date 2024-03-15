#include <string.h>
#include <stdio.h>
typedef struct Books{
    int id;
    int price;
    char Title[100];
}book_t;

void total_price(book_t book[],int n){
    int total=0;
    for(int i=0;i<n;i++){
        total+=book[i].price;
    }
    printf("Total price is $%d\n",total);
}
void list_books(book_t book[],int n){
    for(int i=0;i<n;i++){
        printf("id=%d Price=%d$ Title=%s\n",book[i].id,book[i].price,book[i].Title);
    }
} 



int main()
{   
    book_t book[6];
    
    book[0].id=1;
    book[0].price=1000;
    strcpy(book[0].Title, "All the Light We Cannot See");
    
    book[1].id=2;
    book[1].price=300;
    strcpy(book[1].Title, "The 38 Letters from J.D. Rockefeller to his son");
    
    book[2].id=3;
    book[2].price=1000;
    strcpy(book[2].Title, "The Ballad of Songbirds and Snakes");
    
    book[3].id=4;
    book[3].price=550;
    strcpy(book[3].Title, "Kllers of the Flower Maon");
    
    book[4].id=5;
    book[4].price=870;
    strcpy(book[4].Title, "Hon Musk");
    
    book[5].id=6;
    book[5].price=1344;
    strcpy(book[5].Title, "Milk and Honey 12-Month 2024");
    
    list_books(book,6);
    printf("\n");
    total_price(book,6);
    
    
    return 0;
}
