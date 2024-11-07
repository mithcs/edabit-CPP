std::string getTriangleType(std::vector<int> arr) {
    if (arr.size() != 3) return "not a triangle";

    int first = std::count(arr.begin(), arr.end(), arr.front());
    int last = std::count(arr.begin(), arr.end(), arr.back());

    if (first == 3) {
        return "equilateral";
    } else if (first == 2 || last == 2) {
        return "isosceles";
    } else {
        return "scalene";
    }
}
