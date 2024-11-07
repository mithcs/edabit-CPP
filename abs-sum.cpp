int getAbsSum(std::vector<int> arr) {
    int sum = 0;

    for (int a : arr) {
        if (a < 0) {
            sum += (a * -1);
        } else {
            sum += a;
        }
    }

    return sum;
}
