public class wavePrint {

    public static void wavePrint(int input[][]) {
        int nRows = input.length;
        if (nRows != 0) {
            int mCols = input[0].length;
            for (int j = 0; j < mCols; j++)
                if (j % 2 == 0)
                    for (int i = 0; i < nRows; i++)
                        System.out.print(input[i][j] + " ");
                else
                    for (int i = nRows - 1; i >= 0; i--)
                        System.out.print(input[i][j] + " ");
        }
    }
}