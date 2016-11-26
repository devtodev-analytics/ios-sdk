#import <Foundation/Foundation.h>

@interface DevToDevPushManager : NSObject

// initialize push manager
+(DevToDevPushManager *) pushManager;

// get current push token
-(NSString *) getPushToken;

// system push notification registration success
-(void) handlePushRegistration: (NSData *) token;

// system push notifications
-(void) handlePushReceived: (NSDictionary *) info;

@end
