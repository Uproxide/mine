#pragma once
#include "../../defs/all.h"

class CreditsLayer : public Popup<std::string const&> {
protected:
    bool setup(std::string const& value) override;
    void setupCreditsTab();
    void setupLevelsTab();
    void setupDebugTab();
    void changeTab();
    void onResetGameVar(CCObject* sender);
    void onNext(CCObject*);
    void onPrev(CCObject*);

    $override
    virtual void keyDown(cocos2d::enumKeyCodes key);

    CCMenuItemSpriteExtra* m_forwardTabBtn = nullptr;
    CCMenuItemSpriteExtra* m_backTabBtn = nullptr;

    CCMenu* m_forwardTabMenu = nullptr;
    CCMenu* m_backTabMenu = nullptr;

    CCLayer* m_creditsLayer = nullptr;
    CCLayer* m_levelsLayer = nullptr;
    CCLayer* m_debugLayer = nullptr;
    
    int m_tab = 0;
public:
    static CreditsLayer* create(std::string const& title);
};