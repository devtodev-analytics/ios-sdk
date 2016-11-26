#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

typedef struct DTDAdSize {
	NSUInteger bannerId;
	CGSize bannerSize;
} DTDAdSize;

#pragma mark Standard Sizes

// 320x50. iPhone and iPod Touch.
extern DTDAdSize const kDTDAdSizeBanner;

// 480x32. Taller of kDTDAdSizeBanner.
extern DTDAdSize const kDTDAdSizeLargeBanner;

// 300x250. Medium Rectangle size for the iPad.
extern DTDAdSize const kDTDAdSizeMediumRectangle;

// 468x60. Full Banner size for the iPad.
extern DTDAdSize const kDTDAdSizeFullBanner;

// 728x90. Leaderboard size for the iPad.
extern DTDAdSize const kDTDAdSizeLeaderboard;