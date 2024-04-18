#include <iostream>
#include <string>

int main() {
    std::string partnerName;
    int partnerAge;
    bool partnerKind, partnerFunny;

    std::cout << "Enter the name of the potential partner: ";
    std::cin >> partnerName;

    std::cout << "Enter the age of the potential partner: ";
    std::cin >> partnerAge;

    std::cout << "Is the potential partner kind? (1 for yes, 0 for no): ";
    std::cin >> partnerKind;

    std::cout << "Is the potential partner funny? (1 for yes, 0 for no): ";
    std::cin >> partnerFunny;

    if (partnerAge >= 18) {
        if (partnerKind && partnerFunny) {
            std::cout << partnerName << " sounds like a great choice! Go for it!\n";
        } else if (partnerKind && !partnerFunny) {
            std::cout << partnerName << " seems nice, but humor is important too.\n";
        } else if (!partnerKind && partnerFunny) {
            std::cout << partnerName << " might be funny, but kindness is crucial.\n";
        } else {
            std::cout << partnerName << " doesn't seem like the best fit.\n";
        }
    } else {
        std::cout << "Sorry, you should only consider partners who are 18 or older.\n";
    }

    return 0;
}