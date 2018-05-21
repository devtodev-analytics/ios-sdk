//
//  ProgressionEventParams.h
//  devtodev
//
//  Created by Aleksey Kornienko on 29/06/16.
//  Copyright © 2016 devtodev. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * Parameters of a progression event
 **/
@interface ProgressionEventParams : NSObject <NSCoding>

/**
 * @property earned
 * @brief Sets the resources a user earned in this event
 **/
@property (nonatomic, retain) NSMutableDictionary * earned;

/**
 * @property spent
 * @brief Sets the resources a user spent in this event
 **/
@property (nonatomic, retain) NSMutableDictionary * spent;

/**
 * @property isSuccess
 * @brief Parameter of the status of a completed event
 **/
@property (nonatomic) BOOL isSuccess;

- (void) mergeWithParameters: (ProgressionEventParams *) parameters;

- (NSMutableDictionary *) dictionary;

@end
