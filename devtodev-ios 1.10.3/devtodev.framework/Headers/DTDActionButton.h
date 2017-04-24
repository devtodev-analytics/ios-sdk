#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <UserNotifications/UserNotifications.h>
#import "DTDActionType.h"

/**
 * Action button in a push notification
 **/
@interface DTDActionButton : NSObject

/**
 * @property buttonId
 * @brief Button identifier
 **/
@property (nonatomic, readonly) NSString * buttonId;

/**
 * @property text
 * @brief Button text
 **/
@property (nonatomic, readonly) NSString * text;

/**
 * @property destructive
 * @brief isDestructive
 **/
@property (nonatomic, readonly) BOOL destructive;

/**
 * @property actionType
 * @brief Type of an action performed when the button is clicked
 **/
@property (nonatomic, readonly) DTDActionType actionType;

/**
 * @property actionString
 * @brief Action string (if there is an active action)
 **/
@property (nonatomic, readonly) NSString * actionString;

- (NSDictionary *) dictionary;

@end
