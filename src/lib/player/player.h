#include <vector>
#include "../cardClass/cardClass.h"


class Player {

    private:
        int idNum;
        std::vector <CardClass> cards;

    public:
        // default constructor
        Player();

        // Parameterized constructors
        Player(int idNum);
        Player(int idNum, std::vector <CardClass> cards);

        // Getter
        int getIdNum();
        std::vector <CardClass> getCards();

        // Modifiers
        void addToCards(CardClass card);
        void removeElement(int index);

        // Print methods
        void printAllCards();
};