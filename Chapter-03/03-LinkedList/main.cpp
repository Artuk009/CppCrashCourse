#include <cstdio>


struct Element
{
    Element* next{};

    void insert_after(Element* new_element)
    {
        new_element->next = next;
        next = new_element;
    }

    char prefix[2];
    short operating_number;
};


int main()
{
    // Initilize objects/troopers
    Element trooper1, trooper2, trooper3;
    
    // Define the trooper attributes
    trooper1.prefix[0] = 'T';
    trooper1.prefix[1] = 'K';
    trooper1.operating_number = 421;

    // Insert as next element in the linked list
    trooper1.insert_after(&trooper2);
    
    // Define the trooper attributes
    trooper2.prefix[0] = 'F';
    trooper2.prefix[1] = 'N';
    trooper2.operating_number = 2187;

    // Insert as next element in the linked list
    trooper2.insert_after(&trooper3);
    
    // Define the trooper attributes
    trooper3.prefix[0] = 'L';
    trooper3.prefix[1] = 'S';
    trooper3.operating_number = 005;

    // Start at to the first address in the list
    // While cursor not nullpointer
    // Move to the next address
    for (Element *cursor = &trooper1; cursor; cursor = cursor->next)
    {
        // Output prefix elements and operating number attribute of current object
        printf("stormtrooper %c%c-%d\n",
            cursor->prefix[0],
            cursor->prefix[1],
            cursor->operating_number);
    }
    
    return 0;
}
