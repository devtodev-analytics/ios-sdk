#import <Foundation/Foundation.h>
#import <StoreKit/StoreKit.h>

#import "ReceiptStatus.h"
#import "TimeStatus.h"

@interface DevToDevCheat : NSObject

+(void) verifyPaymentWithCompletion: (void (^)(ReceiptStatus status))comlpetion;

+(void) verifyPaymentWithBase64Receipt:(NSString *) receipt  andCompletion:(void (^)(ReceiptStatus status))completion;

+(void) verifyPayment: (SKPaymentTransaction *) product withSharedSecret : (NSString *) sharedSecret andCompletion : (void (^)(ReceiptStatus status))completionBlock;

+(void) checkTime: (void (^)(TimeStatus status)) completionBlock;

@end
