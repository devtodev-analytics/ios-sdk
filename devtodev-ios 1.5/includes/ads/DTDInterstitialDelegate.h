#import <Foundation/Foundation.h>

@class DTDInterstitial;

@protocol DTDInterstitialDelegate <NSObject>

@optional

/// Called when an interstitial ad request succeeded.
-(void) interstitialDidReceiveAd: (DTDInterstitial *) interstitial;

/// Called when an interstitial ad request completed without an interstitial to show
-(void) interstitial: (DTDInterstitial *) interstitial didFailToreceiveAdWithError: (NSInteger) error;

/// Called just before presenting an interstitial.
- (void)interstitialWillPresentScreen: (DTDInterstitial *)ad;

/// Called before the interstitial is to be animated off the screen.
- (void)interstitialWillDismissScreen: (DTDInterstitial *)ad;

/// Called just after dismissing an interstitial and it has animated off the screen.
- (void)interstitialDidDismissScreen: (DTDInterstitial *)ad;

/// Called just before the application will background or terminate because the user clicked on an
/// ad that will launch another application (such as the App Store).
- (void)interstitialWillLeaveApplication: (DTDInterstitial *)ad;

@end
