#include <iostream>
using namespace std;

double calculateMarkup(double merchandise_cost, double salary, double rent, double electricity_cost, double desired_profit) {
    double total_expenses = merchandise_cost + salary + rent + electricity_cost;
    double required_revenue = total_expenses / (1 - desired_profit);
    double markup_before_sale = required_revenue / merchandise_cost;
    double final_markup = markup_before_sale / 0.85;  // considering 15% sale
    return final_markup;
}

int main() {
    double merchandise_cost, salary, rent, electricity_cost;
    double desired_profit = 0.10;  // 10% desired profit

    cout << "Enter the total cost of merchandise: ";
    cin >> merchandise_cost;
    cout << "Enter the total salary of employees (including yours): ";
    cin >> salary;
    cout << "Enter the yearly rent: ";
    cin >> rent;
    cout << "Enter the estimated electricity cost: ";
    cin >> electricity_cost;

    double markup = calculateMarkup(merchandise_cost, salary, rent, electricity_cost, desired_profit);
    cout << "To achieve approximately 10% net profit, the merchandise should be marked up by approximately " << markup << " times." << endl;

    return 0;
}