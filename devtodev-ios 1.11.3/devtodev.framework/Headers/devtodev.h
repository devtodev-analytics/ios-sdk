#import <UIKit/UIKit.h>

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
 * @version 1.11.2
 **/

@interface DevToDev : NSObject

+(nonnull DTDPushManager *) pushManager;

/**
 * @brief Enable Debug mode
 */
+(void) setActiveLog: (BOOL) isActive;

/**
 * @brief devtodev App Id and Secret key can be found in the devtodev application settings page (“My apps” → App Name → “Settings” → “Integration”)
 */
+(void) initWithKey: (nonnull NSString *) key andSecretKey: (nonnull NSString *) secretKey;

/**
 * @brief To send events pack before it is filled or before its formation period.
 **/
+(void) sendBufferedEvents;

/**
 * @brief If you want to count the events which are not among basic, use custom events.
 * @param eventName Event name
 */
+(void) customEvent: (nonnull NSString *) eventName;

/**
 * @brief If you want to count the events which are not among basic, use custom events.
 * @param eventName Event name
 * @param params Event parameters
 */
+(void) customEvent: (nonnull NSString *) eventName withParams: (nonnull CustomEventParams *) params;

/**
 * @brief The method have to be used when entering the location.
 * @param eventId The name of location user entered.
 * @param parameters Instance of location parameters class
 */
+(void) startProgressionEvent: (nonnull NSString *) eventId withParameters: (nonnull ProgressionEventParams *) parameters;

/**
 * @brief The method have to be used when the location passing is over.
 * @param eventId The name of location user left.
 * @param parameters Instance of location parameters class
 */
+(void) endProgressionEvent: (nonnull NSString *) eventId withParameters: (nonnull ProgressionEventParams *) parameters;

/**
 * @param currencyName - currency name (max. 24 symbols)
 * @param amount - the amount an account has been credited with.
 * @param accrualType - the way the currency was obtained: earned or purchased
 */
+(void) currencyAccrual: (NSInteger) amount withCurrencyName: (nonnull NSString *) currencyName andCurrencyType: (AccrualType) accrualType;

/**
 * @brief In-app purchase with a definite article ID.
 *
 * @param purchaseId Unique purchase Id (max. 32 symbols)
 * @param purchaseType Purchase type or group (max. 96 symbols)
 * @param purchaseAmount Count of purchased goods
 * @param purchasePrice Cost of purchased goods (total cost -if several goods were purchased)
 * @param purchaseCurrency Currency name (max. 24 symbols)
 */
+(void) inAppPurchase: (nonnull NSString *) purchaseId
     withPurchaseType: (nonnull NSString *) purchaseType
    andPurchaseAmount: (NSInteger) purchaseAmount
     andPurchasePrice: (NSInteger) purchasePrice
  andPurchaseCurrency: (nonnull NSString *) purchaseCurrency;

/**
 * @brief In-app purchase with a definite article ID.
 *
 * @param purchaseId Unique purchase Id (max. 32 symbols)
 * @param purchaseType Purchase type or group (max. 96 symbols)
 * @param purchaseAmount Count of purchased goods
 * @param resources Dictionary with prices and currencies
 */
+(void) inAppPurchase: (nonnull NSString *) purchaseId
     withPurchaseType: (nonnull NSString *) purchaseType
    andPurchaseAmount: (NSInteger) purchaseAmount
         andResources: (nonnull NSDictionary *) resources;

/**
 * @brief The event allowing to track the stage of tutorial a player is on.
 * @param tutorialState The latest successfully completed tutorial step.
 */
+(void) tutorialCompleted: (NSInteger) tutorialState;

/**
 * @brief Player has reached a new level
 * @param level - level reached by the player.
 */
+(void) levelUp: (NSUInteger) level;

/**
 * @brief Player has reached a new level
 * @param level - level reached by the player.
 * @param resources - dictionary with the currency names and amounts
 */
+(void) levelUp:(NSUInteger)level withResources: (nonnull NSDictionary *) resources;

/**
 * @brief Initializes the current user level. Required if level feature used in the app.
 * @param level - Сurrent game level of the player.
 */
+(void) setCurrentLevel: (NSUInteger) level;

/**
 * @brief Register transactions made through the platform's payment system.
 * @param transactionId Unique order identifier / transaction ID
 * @param inAppPrice Product price (in user's currency)
 * @param inAppName Product name
 * @param inAppCurrencyISOCode Transaction currency (ISO 4217 format)
 */
+(void) realPayment: (nonnull NSString *) transactionId
     withInAppPrice: (float) inAppPrice
       andInAppName: (nonnull NSString *) inAppName
andInAppCurrencyISOCode: (nonnull NSString *) inAppCurrencyISOCode;

/**
 * @brief Tracks the existence of connects to a social network.
 **/
+(void) socialNetworkConnect: (nonnull SocialNetwork *) socialNetwork;

/**
 * @brief Tracks the existence of posts to a social network.
 * @param socialNetwork Social network Id
 * @param reason The reason of posting (max. 32 symbols)
 */
+(void) socialNetworkPost: (nonnull SocialNetwork *) socialNetwork withReason: (nonnull NSString *) reason;

/**
 * @brief Tracks user's referral data
 * @param utm Dictionary with referrer values
 */
+(void) referrer: (nonnull NSDictionary<ReferralProperty*, NSString*> *) utm;

/**
 * @brief Get active user data
 **/
+(nullable People *) activeUser;

/**
 * @brief Initializes the user with the specified cross-platform identifier
 * @param userId Unique cross-platform user ID used for user identification on your server.
 */
+(void) setUserId: (nonnull NSString *) userId;

/**
 * @brief Replaces current cross-platform user id Attention! Don't use this method if you're going to perform the user's relogin.
 * @param prevUserId Previous cross-platform user ID
 * @param userId New cross-platform user ID
 */
+(void) replaceUserId: (nonnull NSString *) prevUserId to: (nonnull NSString *) userId;

/**
 * @brief Returns current cross-platform user id
 * @return userId - current cross-platform user id
 */
+(nonnull NSString *) getUserId;

/**
 * @brief OpenUdid
 * @return NSString
 **/
+(nonnull NSString *) getOpenUdid;

/**
 * @brief ODIN1
 * @return NSString
 */
+(nonnull NSString *) getOdin1;

/**
 * @brief Return current SDK version
 * @return NSString
 */
+(nonnull NSString *) sdkVersion;

@end
