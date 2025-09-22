void bresenhamSextoOctante(int x1, int y1, int x2, int y2) {
    int x = x1;
    int y = y1;

    int dx = x2 - x1;
    int dy = y2 - y1;

    int d = 2 * dx - dy; // valor inicial fator de decisão, dstart
    int incS = 2 * dx;  // incr que move para sul
    int incSW = 2 * (dx - dy); // incr para sudoeste

    write_pixel(x, y);
    while (y > y2) {
        // F(M) > 0, abaixo da linha
        if (d > 0) {
            // sudoeste
            d += incSW;
            x--;
        } else {
            // sul
            d += incS;
        }
        y--; // decrementa y
        write_pixel(x, y);
    }
}