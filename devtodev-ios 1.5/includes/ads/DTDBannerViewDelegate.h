#import <Foundation/Foundation.h>

@class DTDBannerView;

@protocol DTDBannerViewDelegate<NSObject>

@optional

/// Called when an ad request loaded an ad.
- (void) adViewDidReceiveAd:(DTDBannerView *) bannerView;

/// Called when an ad request failed.
- (void) adView: (DTDBannerView *) bannerView didFailToReceiveAdWithError: (NSInteger) errorCode;

/// Called just before presenting the user a full screen view, such as a browser, in response to clicking on an ad.
- (void) adViewWillPresentScreen: (DTDBannerView *) adView;

/// Called just before dismissing a full screen view.
- (void) adViewWillDismissScreen: (DTDBannerView *) adView;

/// Called just after dismissing a full screen view.
- (void)adViewDidDismissScreen:(DTDBannerView *)adView;

/// Called just before the application will background or terminate because the user clicked on an
/// ad that will launch another application (such as the App Store).
- (void) adViewWillLeaveApplication: (DTDBannerView *) adView;

@end
