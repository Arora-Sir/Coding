public class Solution {

    public static void spiralPrint(int mat[][]) {
        int nRows = mat.length;
        if (nRows == 0)
            return;

        int mCols = mat[0].length;
        int i, rowStart = 0, colStart = 0;
        int numElements = nRows * mCols;

        while (numElements > 0) {
            for (i = colStart; i < mCols; ++i) {
                System.out.print(mat[rowStart][i] + " ");
                numElements--;
            }
            rowStart++;

            for (i = rowStart; i < nRows; ++i) {
                System.out.print(mat[i][mCols - 1] + " ");
                numElements--;
            }
            mCols--;

            for (i = mCols - 1; i >= colStart; --i) {
                System.out.print(mat[nRows - 1][i] + " ");
                numElements--;
            }
            nRows--;

            for (i = nRows - 1; i >= rowStart; --i) {
                System.out.print(mat[i][colStart] + " ");
                numElements--;
            }
            colStart++;
        }
    }
}