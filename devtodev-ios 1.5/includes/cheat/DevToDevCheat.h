#import <Foundation/Foundation.h>
#import <StoreKit/StoreKit.h>

#import "ReceiptStatus.h"
#import "TimeStatus.h"

@interface DevToDevCheat : NSObject

+(void) verifyPaymentWithBase64Receipt:(NSString *) receipt  andCompletion:(void (^)(ReceiptStatus))completion;

+(void) verifyPayment: (SKPaymentTransaction *) product withSharedSecret : (NSString *) sharedSecret andCompletion : (void (^)(ReceiptStatus))completionBlock;

+(void) checkTime: (void (^)(TimeStatus status)) completionBlock;

@end
