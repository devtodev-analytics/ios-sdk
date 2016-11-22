#import <Foundation/Foundation.h>
#import <StoreKit/StoreKit.h>

#import "ReceiptStatus.h"
#import "TimeStatus.h"

@interface DevToDevCheat : NSObject

+(void) verifyPaymentWithCompletion: (void (^)(ReceiptStatus status))comlpetion;

+(void) checkTime: (void (^)(TimeStatus status)) completionBlock;

@end
