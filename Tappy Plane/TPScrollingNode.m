//
//  TPScrollingNode.m
//  Tappy Plane
//
//  Created by J Hastwell on 21/03/2014.
//  Copyright (c) 2014 Code Coalition. All rights reserved.
//

#import "TPScrollingNode.h"

@implementation TPScrollingNode

- (void)updateWithTimeElpased:(NSTimeInterval)timeElapsed
{
    if (self.scrolling) {
        self.position = CGPointMake(self.position.x + (self.horizontalScrollSpeed * timeElapsed), self.position.y);
    }
}

@end
