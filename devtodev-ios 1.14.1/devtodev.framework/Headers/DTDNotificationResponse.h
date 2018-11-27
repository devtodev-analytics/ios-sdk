//
//  DTDNotificationResponce.h
//  devtodev
//
//  Created by Aleksey Kornienko on 14.03.17.
//  Copyright © 2017 devtodev. All rights reserved.
//

#import <Foundation/Foundation.h>

@class UNNotificationResponse;

@interface DTDNotificationResponse : NSObject

@property (nonatomic, readonly, nullable, strong) UNNotificationResponse *response;

+ (nonnull instancetype)notificationResponseWithUNNotificationResponse:( nullable UNNotificationResponse * ) response;

@end
