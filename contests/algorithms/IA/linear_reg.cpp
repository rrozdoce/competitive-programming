#include <iostream>
#include <vector>

using namespace std;

// Função para calcular a média de um vetor
double mean(const vector<double> &values)
{
    double sum = 0.0;
    for (double value : values)
    {
        sum += value;
    }
    return sum / values.size();
}

// Função para calcular a inclinação (slope) e o intercepto (intercept)
void linear_regression(const vector<double> &x, const vector<double> &y, double &slope, double &intercept)
{
    double x_mean = mean(x);
    double y_mean = mean(y);

    double numerator = 0.0;
    double denominator = 0.0;

    for (size_t i = 0; i < x.size(); ++i)
    {
        numerator += (x[i] - x_mean) * (y[i] - y_mean);
        denominator += (x[i] - x_mean) * (x[i] - x_mean);
    }

    slope = numerator / denominator;
    intercept = y_mean - slope * x_mean;
}

int main()
{
    // Dados de exemplo
    vector<double> x = {1, 2, 3, 4, 5}; // Variável independente
    vector<double> y = {2, 4, 5, 4, 5}; // Variável dependente

    double slope, intercept;

    // Calcula a regressão linear
    linear_regression(x, y, slope, intercept);

    // Exibe os resultados
    cout << "Equação da reta: y = " << slope << " * x + " << intercept << endl;

    // Previsão para um novo valor de x
    double new_x = 6;
    double predicted_y = slope * new_x + intercept;
    cout << "Previsão para x = " << new_x << ": y = " << predicted_y << endl;

    return 0;
}