#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DTDInterstitialDelegate.h"

@interface DTDInterstitial : NSObject

#pragma mark Pre-Request

@property (nonatomic, copy) NSString * adUnitId;

@property (nonatomic, weak) id<DTDInterstitialDelegate> delegate;

#pragma mark Making Ad request

- (void) loadAd;

#pragma mark Post-Request

@property (nonatomic, readonly, assign) BOOL isReady;

- (void) presentFromRootViewController: (UIViewController *) rootViewController;

@end
