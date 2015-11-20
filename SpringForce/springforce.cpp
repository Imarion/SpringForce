
#include <QtMath>

#include "springforce.h"


SpringForce::SpringForce()
{
    // values from https://answers.yahoo.com/question/index?qid=20081108201653AAReHnQ -> x = 1.20cm
    Amplitude       = 0.0;
    SpringConstant  = 81.75;
    ObjectMass      = 100;
}

SpringForce::SpringForce(float inAmplitude, float inSpringConstant, float inObjectMass)
{
    Amplitude       = inAmplitude;
    SpringConstant  = inSpringConstant;
    ObjectMass      = inObjectMass;
}

float SpringForce::getAmplitude() const
{
    return Amplitude;
}

void SpringForce::setAmplitude(float value)
{
    Amplitude = value;
}

float SpringForce::getSpringConstant() const
{
    return SpringConstant;
}

void SpringForce::setSpringConstant(float value)
{
    SpringConstant = value;
}

float SpringForce::getObjectMass() const
{
    return ObjectMass;
}

void SpringForce::setObjectMass(float value)
{
    ObjectMass = value;
}

float SpringForce::calcMotion(float t)
{
    return Amplitude * qCos(qSqrt(SpringConstant/ObjectMass) * t);
}
