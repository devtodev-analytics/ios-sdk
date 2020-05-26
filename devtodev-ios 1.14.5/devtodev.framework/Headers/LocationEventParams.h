//
//  LocationEventParams.h
//  devtodev
//
//  Created by Aleksey Kornienko on 29/06/16.
//  Copyright © 2016 devtodev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ProgressionEventParams.h"

/**
 * Game location parameters
 **/
@interface LocationEventParams : ProgressionEventParams

/**
 * @property difficulty
 * @brief Set the level of difficulty of a game location
 **/
@property (nonatomic) NSInteger difficulty;

/**
 * @property source
 * @brief Previous location from which a player came
 **/
@property (nonatomic, retain) NSString * source;

/**
 * @property
 * @brief Time spent in the location
 * In case the parameter is not specified by the developer, it will be automatically calculated
 * as the date difference between startProgressionEvent and endProgressionEvent method calls.
 **/
@property (nonatomic, retain) NSNumber * duration;

@end
