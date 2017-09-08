#ifndef BEINGS_H
#define BEINGS_H

#include <QObject>
#include <QWidget>

#include "components.h"

//Human Class
class Human : public QObject
{
    Q_OBJECT
public:
    Human();
    ~Human();

    void transform(bool enabled);

    void setLightEssence(LightEssence* lightEssence);
    void setSoundEssence(SoundEssence* soundEssence);
    void setOdorEssence(OdorEssence* odorEssence);
    void setTasteEssence(TasteEssence* tasteEssence);
    void setTouchEssence(TouchEssence* touchEssence);
    void setThoughtEssence(ThoughtEssence* thoughtEssence);
    void setAwareEssence(AwareEssence* awareEssence);

    void setAttribute(float attribute);
    void setLevel(float level);
    void setLifetime(float lifetime);
    void setHealth(float health);

    LightEssence* getLightEssence();
    SoundEssence* getSoundEssence();
    OdorEssence* getOdorEssence();
    TasteEssence* getTasteEssence();
    TouchEssence* getTouchEssence();
    ThoughtEssence* getThoughtEssence();
    AwareEssence* getAwareEssence();

    float getAttribute();
    float getLevel();
    float getLifetime();
    float getHealth();

    void destroy();

private:
    LightEssence *m_lightEssence;
    SoundEssence *m_soundEssence;
    OdorEssence *m_odorEssence;
    TasteEssence *m_tasteEssence;
    TouchEssence *m_touchEssence;
    ThoughtEssence *m_thoughtEssence;
    AwareEssence *m_awareEssence;

    float m_attribute; //gold, wood, water, fire, soil
    float m_level; // level 1~10
    float m_lifetime;
    float m_health;

};

/*
class Animal : public QObject
{
    Q_OBJECT
public:
    Animal();
    ~Animal();

    void transform(bool enabled);

    void setLifeTime(float lifetime);
    void setHealth(float health);
    void setAware(float aware);
    void setFaEnabled(bool faEnabled);
    void setFaQuality(float faQuality);
    void setFaQuantity(float faQuantity);

    float getLifeTime();
    float getHealth();
    float getAware();
    bool getFaEnabled();
    float getFaQuality();
    float getFaQuantity();

public Q_SLOTS:
    void acceptLight(bool enabled, float diversity, float quality, float quantity);

    void acceptAwareFa(bool enabled, float quality, float quantity);

Q_SIGNALS:
    void sendFa(bool enabled, float quality, float quantity);

private:
    float m_lifetime;
    float m_health;
    float m_aware;

    bool m_faEnabled;
    float m_faQuality;
    float m_faQuantity;
};

class Plant : public QObject
{
    Q_OBJECT
public:
    Plant();
    ~Plant();

    void transform(bool enabled);

    void setLifeTime(float lifetime);
    void setHealth(float health);
    void setAware(float aware);
    void setFaEnabled(bool faEnabled);
    void setFaQuality(float faQuality);
    void setFaQuantity(float faQuantity);

    float getLifeTime();
    float getHealth();
    float getAware();
    bool getFaEnabled();
    float getFaQuality();
    float getFaQuantity();

public Q_SLOTS:
    void acceptLight(bool enabled, float diversity, float quality, float quantity);

    void acceptAwareFa(bool enabled, float quality, float quantity);

Q_SIGNALS:
    void sendFa(bool enabled, float quality, float quantity);

private:
    float m_lifetime;
    float m_health;
    float m_aware;

    bool m_faEnabled;
    float m_faQuality;
    float m_faQuantity;
};

class Inorganics : public QObject
{
    Q_OBJECT
public:
    Inorganics();
    ~Inorganics();

    void transform(bool enabled);

    void setLifeTime(float lifetime);
    void setHealth(float health);
    void setAware(float aware);
    void setFaEnabled(bool faEnabled);
    void setFaQuality(float faQuality);
    void setFaQuantity(float faQuantity);

    float getLifeTime();
    float getHealth();
    float getAware();
    bool getFaEnabled();
    float getFaQuality();
    float getFaQuantity();

public Q_SLOTS:
    void acceptLight(bool enabled, float diversity, float quality, float quantity);

    void acceptAwareFa(bool enabled, float quality, float quantity);

Q_SIGNALS:
    void sendFa(bool enabled, float quality, float quantity);

private:
    float m_lifetime;
    float m_health;
    float m_aware;

    bool m_faEnabled;
    float m_faQuality;
    float m_faQuantity;
};
*/

#endif // BEINGS_H
