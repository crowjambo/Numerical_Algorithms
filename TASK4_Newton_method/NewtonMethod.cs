using System;

//draws tangent between intervals
public class NewtonMethod{

    public double? ExecuteNewtonRaphson(
        Func<double,double> function,
        Func<double,double> derivative,
        double initialGuess,
        double error
    ){
        //variables
        Func<double,double> f = function;
        Func<double,double> g = derivative;

        double x0 = initialGuess;
        double err = error;

        bool Converged = false;
        int i = 0;
        double x1 = 0;

        do{
            if(g(x0) == 0){
                return null;
            }
            x1 = x0 - f(x0) / g(x0);
            x0 = x1;
            i++;
            Converged = Math.Abs(f(x1)) <= err;

            Console.Write($"iteration {i}\n x1: {x1}\n {x0}\n\n -----");
        } while (!Converged);

        if(Converged){
            return x1;
        }else{
            return null;
        }
    }
}