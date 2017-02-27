#import <Foundation/Foundation.h>
#import "DTDActionType.h"

/**
 * Push notification body
 **/
@interface DTDPushMessage : NSObject

/**
 * @property data
 * @brief Data passed to push notification by a user
 **/
@property (nonatomic, retain) NSDictionary * data;

/**
 * @property actionType
 * @brief Type of notification action if it was specified
 **/
@property (nonatomic) DTDActionType actionType;

/**
 * @property actionString
 * @brief Action string (if there is an active action)
 **/
@property (nonatomic, retain) NSString * actionString;

/**
 * @property category
 * @brief notification category
 **/
@property (nonatomic, retain) NSString * category;

/**
 * @property badge
 * @brief number of badge
 **/
@property (nonatomic) NSInteger badge;

- (NSDictionary *) dictionary;

@end
