int** transpose(int** matrix, int nRows, int nCols) {
    int ** arr = new int *[nCols];
    for (int i = 0; i < nCols; i++) {
        arr[i] = new int[nRows];
    }

    for (int i = 0; i < nCols; i++) {
        for (int j = 0; j < nRows; j++) {
            arr[i][j] = matrix[j][i];
        }
    }

    return arr;
}