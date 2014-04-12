//
//  TPScrollingNode.h
//  Tappy Plane
//
//  Created by J Hastwell on 21/03/2014.
//  Copyright (c) 2014 Code Coalition. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface TPScrollingNode : SKNode

@property (nonatomic) CGFloat horizontalScrollSpeed; // Distance to scroll per second.
@property (nonatomic) BOOL scrolling;

- (void)updateWithTimeElpased:(NSTimeInterval)timeElapsed;

@end
