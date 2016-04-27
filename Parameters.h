//
// Created by marta on 27.04.16.
//

#ifndef RK4_PARAMETERS_H
#define RK4_PARAMETERS_H


#include <bits/mathdef.h>

#include <iostream>
#include <cstdlib>
#include <math.h>
#include <complex>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <cstdio>

typedef std::complex<double> Complex;
typedef std::vector<std::complex<double>> VecComp;


class Parameters {
    double t0;
    double tMax;
    double DT;
    double L;
    double psiInit;
    double psiBound;
    double g = 0;
    //NLS i CGLE
    double gamma = 0;
    double Gamma = 0;
    //ODGPE
    double gR = 0;
    double gammaC = 0;
    double gammaR = 0;
    double R = 0;
    double alpha = 0;
    double nInit = 0;
    double nBound = 0;


public:


    Parameters(double t0, double tMax, double DT, double L, double psiInit, double psiBound, double g, double gamma,
               double Gamma) : t0(t0), tMax(tMax), DT(DT), L(L), psiInit(psiInit), psiBound(psiBound), g(g),
                               gamma(gamma), Gamma(Gamma) { }

    Parameters(double t0, double tMax, double DT, double L, double psiInit, double psiBound, double g) : t0(t0),
                                                                                                         tMax(tMax),
                                                                                                         DT(DT), L(L),
                                                                                                         psiInit(psiInit),
                                                                                                         psiBound(
                                                                                                                 psiBound),

                                                                                                         g(g) { }


    Parameters(double t0, double tMax, double DT, double L, double psiInit, double psiBound, double g, double gR,
               double gammaC, double gammaR, double R, double alpha, double nInit, double nBound) : t0(t0), tMax(tMax),
                                                                                                    DT(DT), L(L),
                                                                                                    psiInit(psiInit),
                                                                                                    psiBound(psiBound),
                                                                                                    g(g), gR(gR),
                                                                                                    gammaC(gammaC),
                                                                                                    gammaR(gammaR),
                                                                                                    R(R), alpha(alpha),
                                                                                                    nInit(nInit),
                                                                                                    nBound(nBound) { }

    Complex psiInitial(double x);

    void psiBoundary(Complex *y, VecComp &V, int y_length);
//getters

    double getT0() const {
        return t0;
    }

    double getTMax() const {
        return tMax;
    }

    double getDT() const {
        return DT;
    }

    double getL() const {
        return L;
    }

    double getPsiInit() const {
        return psiInit;
    }

    double getPsiBound() const {
        return psiBound;
    }

    double getG() const {
        return g;
    }

    double getGamma() const {
        return gamma;
    }

    double getGR() const {
        return gR;
    }

    double getGammaC() const {
        return gammaC;
    }

    double getGammaR() const {
        return gammaR;
    }

    double getR() const {
        return R;
    }

    double getAlpha() const {
        return alpha;
    }

    double getNInit() const {
        return nInit;
    }

    double getNBound() const {
        return nBound;
    }
};


#endif //RK4_PARAMETERS_H
