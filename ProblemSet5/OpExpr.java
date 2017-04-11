import java.util.*;
import javax.swing.*;

public class OpExpr
{
	public static int func(int k)
	{
		k += 4;
		return 3 * (k) - 1;
	}

	public static void main(String[] args)
	{
		int i = 10, j = 10, sum1, sum2; 
		sum1 = (i / 2) + func(i);
		sum2 = func(j) + (j / 2);

		System.out.println("sum1 = " + sum1);
		System.out.println("sum2 = " + sum2);

		System.exit(0);
	}
}