#pragma once
class BachelierModel {

    private:
        double ForwardPrice;
        double r;
        double volatility;

    public:

        BachelierModel(double forward, double r, double vol);

        double n(double x);

        double N(double x);

        double calculateCallPrice(double strikePrice, double timeToMaturity);
    
    };