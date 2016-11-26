#import <Foundation/Foundation.h>

#import "CustomEventParams.h"
#import "TutorialState.h"
#import "SocialNetwork.h"
#import "Gender.h"
#import "AccrualType.h"

/**
 * devtodev sdk
 * @version 1.6.7
 **/

@interface DevToDev : NSObject

+(void) initWithKey: (NSString *) key andSecretKey: (NSString *) secretKey;

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

+(void) age: (NSInteger) age;

+(void) gender: (Gender) gender;

+(void) cheater: (BOOL) cheater;

+(void) setUserId: (NSString *) userId;

+(void) replaceUserId: (NSString *) prevUserId to: (NSString *) userId;

+(NSString *) getUserId;

+(NSString *) getOpenUdid;

+(NSString *) getOdin1;

+(void) setActiveLog: (BOOL) isActive;

+(NSString *) sdkVersion;

@end