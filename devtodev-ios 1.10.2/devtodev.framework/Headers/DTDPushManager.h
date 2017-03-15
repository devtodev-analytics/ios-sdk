#import <Foundation/Foundation.h>

#import "DTDActionType.h"
#import "DTDActionButton.h"
#import "DTDPushMessage.h"
#import "DTDNotificationResponse.h"

typedef NS_OPTIONS(NSUInteger, DTDNotificationOptions) {
    DTDNotificationOptionBadge   = (1 << 0),
    DTDNotificationOptionSound   = (1 << 1),
    DTDNotificationOptionAlert   = (1 << 2),
    DTDNotificationOptionCarPlay = (1 << 3)
};

/**
 * Push notification event listener
 **/
@protocol DevToDevPushManagerDelegate <NSObject>

@optional

/**
 * @brief Device received a token and was successfully subscribed for notifications
 * @param deviceToken device push token
 **/
-(void) didRegisterForRemoteNotificationsWithDeviceToken: (NSString *) deviceToken;

/**
 * @brief Error occured while registering for push notifications
 * @param error text
 **/
-(void) didFailToRegisterForRemoteNotificationsWithError: (NSError *) error;

/**
 * @brief Push notification has been received by the device
 * @param notification data
 **/
-(void) didReceiveRemoteNotification: (NSDictionary *) notification;

/**
 * @brief Push notification has been opened
 * @param pushMessage body
 * @param actionButton button that was clicked
 **/
-(void) didOpenRemoteNotification: (DTDPushMessage *) pushMessage withAction: (DTDActionButton *) actionButton;

/**
 * @brief Push notification receive response
 * Note: This method is relevant only for iOS 10 and above.
 * @param response notification
 **/
-(void) didReceiveNotificationResponse: (DTDNotificationResponse *)response;

@end

/**
 * Class that is responsible for work with push notifications
 */
@interface DTDPushManager : NSObject

/**
 * @property pushNotificationsEnabled
 * @brief enable/disable push notifications
 **/
@property (nonatomic, assign) BOOL pushNotificationsEnabled;

/**
 * @property delegate
 * @brief Set the delegate for event tracking
 **/
@property (nonatomic, weak) id<DevToDevPushManagerDelegate> delegate;

/**
 * @property deviceToken
 * @brief current push token
 **/
@property (nonatomic, copy, readonly) NSString * deviceToken;

@end
