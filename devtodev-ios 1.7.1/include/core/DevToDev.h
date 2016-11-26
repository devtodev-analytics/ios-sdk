#import <Foundation/Foundation.h>

#import "CustomEventParams.h"
#import "TutorialState.h"
#import "SocialNetwork.h"
#import "Gender.h"
#import "AccrualType.h"
#import "ReferralProperty.h"
#import "People.h"

/**
 * devtodev sdk
 * @version 1.7.1
 **/

@interface DevToDev : NSObject

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