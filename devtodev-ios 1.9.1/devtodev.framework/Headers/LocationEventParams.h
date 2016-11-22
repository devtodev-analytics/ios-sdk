//
//  LocationEventParams.h
//  devtodev
//
//  Created by Aleksey Kornienko on 29/06/16.
//  Copyright © 2016 devtodev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ProgressionEventParams.h"

@interface LocationEventParams : ProgressionEventParams

@property (nonatomic) NSInteger difficulty;
@property (nonatomic) NSString * source;
@property (nonatomic) NSNumber * duration;

@end
