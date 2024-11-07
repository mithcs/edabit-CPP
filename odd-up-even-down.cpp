std::vector<int> evenOddTransform(std::vector<int> arr, int n) {
    std::vector<int> result;

    for (auto a : arr) {
        if (a % 2 == 0) {
            int temp = n;
            while (temp != 0) {
                a -= 2;
                temp--;
            }
            result.push_back(a);
        } else {
            int temp = n;
            while (temp != 0) {
                a += 2;
                temp--;
            }
            result.push_back(a);
        }
    }

    return result;
}
