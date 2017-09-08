#include "beings.h"

//Human Area
Human::Human()
{

}

Human::~Human()
{

}

void Human::transform(bool enabled)
{

}

void Human::setLightEssence(LightEssence* lightEssence)
{
    m_lightEssence = lightEssence;
}

void Human::setSoundEssence(SoundEssence* soundEssence)
{
    m_soundEssence = soundEssence;
}

void Human::setOdorEssence(OdorEssence* odorEssence)
{
    m_odorEssence = odorEssence;
}

void Human::setTasteEssence(TasteEssence* tasteEssence)
{
    m_tasteEssence = tasteEssence;
}

void Human::setTouchEssence(TouchEssence* touchEssence)
{
    m_touchEssence = touchEssence;
}

void Human::setThoughtEssence(ThoughtEssence* thoughtEssence)
{
    m_thoughtEssence = thoughtEssence;
}

void Human::setAwareEssence(AwareEssence* awareEssence)
{
    m_awareEssence = awareEssence;
}

void Human::setAttribute(float attribute)
{
    m_attribute = attribute;
}

void Human::setLevel(float level)
{
    m_level = level;
}

void Human::setLifetime(float lifetime)
{
    m_lifetime = lifetime;
}

void Human::setHealth(float health)
{
    m_health = health;
}

LightEssence* Human::getLightEssence()
{
    return m_lightEssence;
}

SoundEssence* Human::getSoundEssence()
{
    return m_soundEssence;
}

OdorEssence* Human::getOdorEssence()
{
    return m_odorEssence;
}

TasteEssence* Human::getTasteEssence()
{
    return m_tasteEssence;
}

TouchEssence* Human::getTouchEssence()
{
    return m_touchEssence;
}

ThoughtEssence* Human::getThoughtEssence()
{
    return m_thoughtEssence;
}

AwareEssence* Human::getAwareEssence()
{
    return m_awareEssence;
}

float Human::getAttribute()
{
    return m_attribute;
}

float Human::getLevel()
{
    return m_level;
}

float Human::getLifetime()
{
    return m_lifetime;
}

float Human::getHealth()
{
    return m_health;
}

void Human::destroy()
{
    this->getAwareEssence()->getAware();
    delete this;
}

