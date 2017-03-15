#import <Foundation/Foundation.h>
#import <StoreKit/StoreKit.h>

#import "ReceiptStatus.h"
#import "TimeStatus.h"

/**
 * Checking players for cheating
 **/
@interface DevToDevCheat : NSObject

/**
 * @brief Validation of the payment from App Store
 * @param comlpetion verification result block
 */
+(void) verifyPaymentWithCompletion: (void (^)(ReceiptStatus status))comlpetion;

/**
 * @brief Find out whether there was time rewind
 * @param completionBlock verification result block
 */
+(void) checkTime: (void (^)(TimeStatus status)) completionBlock;

@end
