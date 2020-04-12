package Processed;

import ObjectOriented.PriorityData;

public class Matrix {

    int iterator;
double [][] matrix = new double[3][3];

double determinantT,determinantX,determinantY,determinantZ;

double betaZero,betaOne,betaTwo,betaThree;

MatrixDeterminant matrixDeterminant = new MatrixDeterminant();
CalculateWeight calculateWeight = new CalculateWeight();

    public void evaluateMatrix(double [] a_array , double [] b_array ,
                               double [] c_array, double [] d_array, PriorityData[] priorityData,
                               int numberOfBooks, double y_mean){


for (iterator =0; iterator <3; iterator++){
    matrix[iterator][0] = a_array[iterator];
}

for (iterator =0; iterator <3; iterator++){
    matrix[iterator][1] = b_array[iterator];
}

for (iterator =0; iterator <3; iterator++){
    matrix[iterator][2] = c_array[iterator];
}

determinantT=matrixDeterminant.calculateDeterminant(matrix);

        for (iterator =0; iterator <3; iterator++){
            matrix[iterator][0] = d_array[iterator];
        }

        determinantX=matrixDeterminant.calculateDeterminant(matrix);
        for (iterator =0; iterator <3; iterator++){
            matrix[iterator][0] = a_array[iterator];
        }


        for (iterator =0; iterator <3; iterator++){
            matrix[iterator][1] = d_array[iterator];
        }
        determinantY=matrixDeterminant.calculateDeterminant(matrix);
        for (iterator =0; iterator <3; iterator++){
            matrix[iterator][1] = b_array[iterator];
        }

        for (iterator =0; iterator <3; iterator++){
            matrix[iterator][2] = d_array[iterator];
        }
        determinantZ=matrixDeterminant.calculateDeterminant(matrix);
        for (iterator =0; iterator <3; iterator++){
            matrix[iterator][2] = c_array[iterator];
        }

betaOne = determinantT/determinantX;

betaTwo = determinantT/determinantY;

betaThree = determinantT/determinantZ;

betaZero  = y_mean - betaOne - betaTwo - betaThree;


calculateWeight.regressionResult(betaZero,betaOne,betaTwo,betaThree,priorityData,numberOfBooks);
        betaOne = Math.pow(betaOne,-1);
        betaTwo = Math.pow(betaTwo,-1);
        betaThree = Math.pow(betaThree,-1);
        calculateWeight.regressionResult(betaZero,betaOne,betaTwo,betaThree,priorityData,numberOfBooks);

      /*  System.out.println("###################################");

        System.out.print("######"); System.out.print("Alpha : "+betaOne);System.out.println("######");
        System.out.print("######");  System.out.print("Beta : "+betaTwo);System.out.println("######");
        System.out.print("######");  System.out.print("Gama : "+betaThree);System.out.println("######");
        System.out.println("###################################");*/

    }

}
