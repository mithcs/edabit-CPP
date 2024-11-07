int combinations(std::vector<int> items) {
    int product = 1;

    for (auto item : items) {
        if (item != 0) {
            product *= item;
        }
    }

    return product;
}
