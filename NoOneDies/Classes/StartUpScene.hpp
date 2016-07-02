//
//  StartUpScene.hpp
//  NoOneDies
//
//  Created by Yuancheng Zhang on 7/1/16.
//
//

#ifndef StartUpScene_hpp
#define StartUpScene_hpp

#include "cocos2d.h"
//#include "GameController.h"

USING_NS_CC;

//class GameController;


class StartUp : public LayerColor
{
private:
    Label *btnTwo, *btnThree, *btnFour, *btnFive;
    EventListenerTouchOneByOne * touchListner;
    
private:
    void addBtns();
    void addBtnListeners();
    
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static Scene* createScene();
    
    // Here's a difference. Method 'init' in cocos2d-x return bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    
    // a selector callback
    void menuCloseCallback(Ref* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(StartUp);
};

#endif /* StartUpScene_hpp */
