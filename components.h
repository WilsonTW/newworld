#ifndef COMPONENTS_H
#define COMPONENTS_H

#include <QObject>
#include <QWidget>

//Light Essence Class
class LightEssence : public QObject
{
    Q_OBJECT
public:
    LightEssence();
    ~LightEssence();

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

//Sound Essence Class
class SoundEssence : public QObject
{
    Q_OBJECT
public:
    SoundEssence();
    ~SoundEssence();

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
    void acceptSound(bool enabled, float diversity, float quality, float quantity);

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

//Sound Essence Class
class OdorEssence : public QObject
{
    Q_OBJECT
public:
    OdorEssence();
    ~OdorEssence();

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
    void acceptOdor(bool enabled, float diversity, float quality, float quantity);

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

//Taste Essence Class
class TasteEssence : public QObject
{
    Q_OBJECT
public:
    TasteEssence();
    ~TasteEssence();

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
    void acceptTaste(bool enabled, float diversity, float quality, float quantity);

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

//Touch Essence Class
class TouchEssence : public QObject
{
    Q_OBJECT
public:
    TouchEssence();
    ~TouchEssence();

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
    void acceptTouch(bool enabled, float diversity, float quality, float quantity);

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

//Thought Essence Class
class ThoughtEssence : public QObject
{
    Q_OBJECT
public:
    ThoughtEssence();
    ~ThoughtEssence();

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
    void acceptThought(bool enabled, float diversity, float quality, float quantity);
    void acceptLightFa(bool enabled, float quality, float quantity);
    void acceptSoundFa(bool enabled, float quality, float quantity);
    void acceptOdorFa(bool enabled, float quality, float quantity);
    void acceptTasteFa(bool enabled, float quality, float quantity);
    void acceptTouchFa(bool enabled, float quality, float quantity);

    void acceptAwareFa(bool enabled, float quality, float quantity);

Q_SIGNALS:
    void sendFa(bool enabled, float quality, float quantity);
    void sendPositionMoving(float x, float y, float z, float speed);
    void sendTimeMoving(float time, float speed);

private:
    float m_lifetime;
    float m_health;
    float m_aware;

    bool m_faEnabled;
    float m_faQuality;
    float m_faQuantity;
};

//Aware Essence Class
class AwareEssence : public QObject
{
    Q_OBJECT
public:
    AwareEssence();
    ~AwareEssence();

    void transform(bool enabled);

    void setFaEnabled(bool faEnabled);
    void setFaQuality(float faQuality);
    void setFaQuantity(float faQuantity);
    void setAware(float aware);

    void setTargetX(float targetX);
    void setTargetY(float targetY);
    void setTargetZ(float targetZ);
    void setTargetTime(float targetTime);

    void setCurrentX(float currentX);
    void setCurrentY(float currentY);
    void setCurrentZ(float currentZ);
    void setCurrentTime(float currentTime);

    bool getFaEnabled();
    float getFaQuality();
    float getFaQuantity();
    float getAware();

    float getTargetX();
    float getTargetY();
    float getTargetZ();
    float getTargetTime();

    float getCurrentX();
    float getCurrentY();
    float getCurrentZ();
    float getCurrentTime();

public Q_SLOTS:
    void acceptAware(bool enabled, float diversity, float quality, float quantity);
    void acceptLightFa(bool enabled, float quality, float quantity);
    void acceptSoundFa(bool enabled, float quality, float quantity);
    void acceptOdorFa(bool enabled, float quality, float quantity);
    void acceptTasteFa(bool enabled, float quality, float quantity);
    void acceptTouchFa(bool enabled, float quality, float quantity);
    void acceptThoughtFa(bool enabled, float quality, float quantity);

    void acceptPositionMoving(float x, float y, float z, float speed);
    void acceptTimeMoving(float time, float speed);

Q_SIGNALS:
    void sendFa(bool enabled, float quality, float quantity);

private:
    bool m_faEnabled;
    float m_faQuality;
    float m_faQuantity;
    float m_aware;

    float m_target_x;
    float m_target_y;
    float m_target_z;
    float m_target_time;

    float m_current_x;
    float m_current_y;
    float m_current_z;
    float m_current_time;
};
/*
class Human : public QObject
{
    Q_OBJECT
public:
    Human();
    ~Human();
};
*/

#endif // COMPONENTS_H
