#import <Foundation/Foundation.h>
#import <UserNotifications/UserNotifications.h>

#import "DTDActionType.h"
#import "DTDActionButton.h"
#import "DTDPushMessage.h"

typedef NS_OPTIONS(NSUInteger, DTDNotificationOptions) {
    DTDNotificationOptionBadge   = (1 << 0),
    DTDNotificationOptionSound   = (1 << 1),
    DTDNotificationOptionAlert   = (1 << 2),
    DTDNotificationOptionCarPlay = (1 << 3)
};

@protocol DevToDevPushManagerDelegate <NSObject>

@optional

-(void) didRegisterForRemoteNotificationsWithDeviceToken: (NSString *) deviceToken;
-(void) didFailToRegisterForRemoteNotificationsWithError: (NSError *) error;
-(void) didReceiveRemoteNotification: (NSDictionary *) notification;
-(void) didOpenRemoteNotification: (DTDPushMessage *) pushMessage withAction: (DTDActionButton *) actionButton;

@end

@interface DTDPushManager : NSObject

@property (nonatomic, assign) BOOL pushNotificationsEnabled;

@property (nonatomic, weak) id<DevToDevPushManagerDelegate> delegate;

@property (nonatomic, copy, readonly) NSString * deviceToken;

@end
