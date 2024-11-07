int cars(int wheels, int bodies, int figures) {
    return min({ wheels / 4, bodies, figures / 2});
}
