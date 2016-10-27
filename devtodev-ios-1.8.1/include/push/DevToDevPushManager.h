#import <Foundation/Foundation.h>

@protocol DevToDevPushManagerDelegate <NSObject>

@optional

-(void) didRegisterForRemoteNotificationsWithDeviceToken: (NSString *) deviceToken;
-(void) didFailToRegisterForRemoteNotificationsWithError: (NSError *) error;
-(void) didReceiveRemoteNotification: (NSDictionary *) notification;

@end

@interface DevToDevPushManager : NSObject

// initialize push manager
+(DevToDevPushManager *) pushManager;

// get current push token
-(NSString *) getPushToken;

// system push notification registration success
-(void) handlePushRegistration: (NSData *) token;

// system push notifications
-(void) handlePushReceived: (NSDictionary *) info;

-(void) setDelegate:(id<DevToDevPushManagerDelegate>)delegate;

@end
