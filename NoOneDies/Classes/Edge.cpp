//
//  Edge.cpp
//  NoOneDies
//
//  Created by Yuancheng Zhang on 7/1/16.
//
//

#include "Edge.hpp"

bool Edge::init()
{
    if (!Node::init())
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    setPhysicsBody(PhysicsBody::createEdgeBox(visibleSize));
    setContentSize(visibleSize);
    
    return true;
}