#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <string>
#include <ctime>
#include <unordered_set>
#include <unordered_map>

using namespace std;

struct Product {
    int productID;
    string name;
    string category;
};

struct Order {
    int orderID;
    int productID;
    int quantity;
    string customerID;
    time_t orderDate;
};

int main() {
    vector<Product> products = {
        {101, "Laptop", "Electronics"},
        {102, "Phone", "Electronics"},
        {103, "Coffee maker", "Kitchen"},
        {104, "Blender", "Kitchen"},
        {105, "Desk Lamp", "Home"},
    };

    deque<string> returnCustomers = {"C001", "C002", "C003"};
    returnCustomers.push_back("C004");
    returnCustomers.push_front("C005");

    list<Order> orderHistory;
    orderHistory.push_back({1, 101, 1, "C001", time(0)});
    orderHistory.push_back({2, 101, 2, "C002", time(0)});
    orderHistory.push_back({3, 101, 1, "C003", time(0)});

    set<string> categories;
    for (const auto &product : products) {
        categories.insert(product.category);
    }

    map<int, int> productStock = {
        {101, 10},
        {102, 20},
        {103, 15},
        {104, 5},
        {105, 7},
    };

    multimap<string, Order> customerOrders;
    for (const auto &order : orderHistory) {
        customerOrders.insert({order.customerID, order});
    }

    unordered_map<string, string> customerData = {
        {"C001", "Alice"},
        {"C002", "Hitesh"},
        {"C003", "Ojas"},
        {"C004", "Abhijit"},
        {"C005", "Bhushan"},
    };

    unordered_set<int> uniqueProductIds;
    for (const auto &product : products) {
        uniqueProductIds.insert(product.productID);
    }

    // Print products
    cout << "Products:" << endl;
    for (const auto &product : products) {
        cout << "ID: " << product.productID << ", Name: " << product.name << ", Category: " << product.category << endl;
    }

    // Print return customers
    cout << "\nReturn Customers:" << endl;
    for (const auto &customer : returnCustomers) {
        cout << customer << endl;
    }

    // Print order history
    cout << "\nOrder History:" << endl;
    for (const auto &order : orderHistory) {
        cout << "Order ID: " << order.orderID << ", Product ID: " << order.productID << ", Quantity: " << order.quantity
             << ", Customer ID: " << order.customerID << ", Order Date: " << ctime(&order.orderDate);
    }

    // Print categories
    cout << "\nCategories:" << endl;
    for (const auto &category : categories) {
        cout << category << endl;
    }

    // Print product stock
    cout << "\nProduct Stock:" << endl;
    for (const auto &stock : productStock) {
        cout << "Product ID: " << stock.first << ", Stock: " << stock.second << endl;
    }

    // Print customer orders
    cout << "\nCustomer Orders:" << endl;
    for (const auto &entry : customerOrders) {
        const auto &order = entry.second;
        cout << "Customer ID: " << entry.first << ", Order ID: " << order.orderID << ", Product ID: " << order.productID
             << ", Quantity: " << order.quantity << ", Order Date: " << ctime(&order.orderDate);
    }

    // Print customer data
    cout << "\nCustomer Data:" << endl;
    for (const auto &customer : customerData) {
        cout << "Customer ID: " << customer.first << ", Name: " << customer.second << endl;
    }

    // Print unique product IDs
    cout << "\nUnique Product IDs:" << endl;
    for (const auto &productId : uniqueProductIds) {
        cout << productId << endl;
    }

    return 0;
}
