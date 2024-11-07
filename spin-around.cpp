int spinAround(std::vector<std::string> r) {
    int left = std::count(r.begin(), r.end(), "left");
    int right = std::count(r.begin(), r.end(), "right");

    return abs(right - left) / 4;
}
