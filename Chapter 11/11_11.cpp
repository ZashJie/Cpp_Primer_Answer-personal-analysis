bool compareIsbn(const Sales_data& lhs, const Sales_data& rhs)
{
    return lhs.isbn() < rhs.isbn();
}


int main() {
    using f = bool (*)(const Sales_daata&, const Sales_daata&);
    multiset<Sales_data, f> bookstore(compareIsbn);

    return 0;
}

