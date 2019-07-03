import java.util.Date;
import java.lang.Math;

class Main {
  public static void main(String[] args) {
    Date startDate = new Date();
    calculatePi();
    Date endDate = new Date();
    System.out.println(endDate.getTime() - startDate.getTime());
  }

  public static void calculatePi() {
     double realPi = 3.141592653589793;
    double epsilon = 0.00000001;
    double delta = 10;
    int k = 1;

    double  pi_value = 0;
    int totalIterations =0;
    while (delta > epsilon)
    {
        pi_value += Math.pow(-1, (k + 1)) / (2 * k - 1);
        delta = Math.abs((4 * pi_value) - realPi);
        k++;
    }
    totalIterations = k;
    pi_value = 4 * pi_value;
    System.out.println("Iterations: "+totalIterations);
  }
}