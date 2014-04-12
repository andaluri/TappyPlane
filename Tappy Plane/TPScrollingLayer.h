//
//  TPScrollingLayer.h
//  Tappy Plane
//
//  Created by J Hastwell on 21/03/2014.
//  Copyright (c) 2014 Code Coalition. All rights reserved.
//

#import "TPScrollingNode.h"

@interface TPScrollingLayer : TPScrollingNode

-(id)initWithTiles:(NSArray*)tileSpriteNodes;

-(void)layoutTiles;

@end
