#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <UserNotifications/UserNotifications.h>
#import "DTDActionType.h"

@interface DTDActionButton : NSObject

@property (nonatomic, readonly) NSString * buttonId;
@property (nonatomic, readonly) NSString * text;
@property (nonatomic, readonly) BOOL destructive;
@property (nonatomic, readonly) DTDActionType actionType;
@property (nonatomic, readonly) NSString * actionString;

- (NSDictionary *) dictionary;

@end
