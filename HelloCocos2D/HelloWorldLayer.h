//
//  HelloWorldLayer.h
//  HelloCocos2D
//
//  Created by Edison on 10/30/11.
//  Copyright __MyCompanyName__ 2011. All rights reserved.
//


// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"
int _projectilesDestroyed;
// HelloWorldLayer
@interface HelloWorldLayer : CCLayerColor
{
}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;

@end
