//
//  ProgressionEventParams.h
//  devtodev
//
//  Created by Aleksey Kornienko on 29/06/16.
//  Copyright © 2016 devtodev. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ProgressionEventParams : NSObject <NSCoding>

@property (nonatomic) NSMutableDictionary * earned;
@property (nonatomic) NSMutableDictionary * spent;
@property (nonatomic) BOOL isSuccess;

- (void) mergeWithParameters: (ProgressionEventParams *) parameters;

- (NSMutableDictionary *) dictionary;

@end
