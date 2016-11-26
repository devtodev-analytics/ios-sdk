#import <UIKit/UIKit.h>

//! Project version number for AirshipKit.
FOUNDATION_EXPORT double devtodevVersionNumber;

//! Project version string for AirshipKit.
FOUNDATION_EXPORT const unsigned char devtodevVersionString[];

#import "CustomEventParams.h"
#import "TutorialState.h"
#import "SocialNetwork.h"
#import "Gender.h"
#import "AccrualType.h"
#import "ReferralProperty.h"
#import "People.h"

#import "ProgressionEventParams.h"
#import "LocationEventParams.h"

#import "DTDPushManager.h"
#import "DevToDevCheat.h"

/**
 * devtodev sdk
 * @version 1.9
 **/

@interface DevToDev : NSObject

+(DTDPushManager *) pushManager;

//
// Enable debug mode
//
+(void) setActiveLog: (BOOL) isActive;

//
// Initialize sdk
//

+(void) initWithKey: (NSString *) key andSecretKey: (NSString *) secretKey;

//
// Base methods
//

+(void) sendBufferedEvents;

+(void) customEvent: (NSString *) eventName;

+(void) customEvent: (NSString *) eventName withParams: (CustomEventParams *) params;

+(void) startProgressionEvent: (NSString *) eventId withParameters: (ProgressionEventParams *) parameters;

+(void) endProgressionEvent: (NSString *) eventId withParameters: (ProgressionEventParams *) parameters;

+(void) currencyAccrual: (NSInteger) amount withCurrencyName: (NSString *) currencyName andCurrencyType: (AccrualType) accrualType;

+(void) inAppPurchase: (NSString *) purchaseId withPurchaseType: (NSString *) purchaseType andPurchaseAmount: (NSInteger) purchaseAmount andPurchasePrice: (NSInteger) purchaseprice andPurchaseCurrency: (NSString *) purchaseCurrency;

+(void) inAppPurchase:(NSString *)purchaseId withPurchaseType:(NSString *)purchaseType andPurchaseAmount:(NSInteger)purchaseAmount andResources: (NSDictionary *) resources;

+(void) tutorialCompleted: (NSInteger) tutorialState;

+(void) levelUp: (NSUInteger) level;

+(void) levelUp:(NSUInteger)level withResources: (NSDictionary *) resources;

+(void) setCurrentLevel: (NSUInteger) level;

+(void) realPayment: (NSString *) transactionId withInAppPrice: (float) inAppPrice andInAppName: (NSString *) inAppName andInAppCurrencyISOCode: (NSString *) inAppCurrencyISOCode;

+(void) socialNetworkConnect: (SocialNetwork *) socialNetwork;

+(void) socialNetworkPost: (SocialNetwork *) socialNetwork withReason: (NSString *) reason;

//
// Additional methods
//

+(void) referrer: (NSDictionary<ReferralProperty*, NSString*> *) utm;

//
// User profile methods
//

+(People *) activeUser;

+(void) setUserId: (NSString *) userId;

+(void) replaceUserId: (NSString *) prevUserId to: (NSString *) userId;

//
// Getters
//

+(NSString *) getUserId;

+(NSString *) getOpenUdid;

+(NSString *) getOdin1;

+(NSString *) sdkVersion;

@end
