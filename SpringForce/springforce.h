#ifndef SPRINGFORCE_H
#define SPRINGFORCE_H

class SpringForce
{
private:
    float Amplitude;       /* A */
    float SpringConstant;  /* k */
    float ObjectMass;      /* m */

public:
    SpringForce();
    SpringForce(float inAmplitude, float inSpringConstant, float inObjectMass);

    float getAmplitude() const;
    void  setAmplitude(float value);
    float getSpringConstant() const;
    void  setSpringConstant(float value);
    float getObjectMass() const;
    void  setObjectMass(float value);

    float calcMotion(float t);
};

#endif // SPRINGFORCE_H
