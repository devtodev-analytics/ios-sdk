#import <UIKit/UIKit.h>

#import "DTDAdSize.h"
#import "DTDBannerViewDelegate.h"

@interface DTDBannerView : UIView

#pragma mark Initialization

- (instancetype) initWithAdSize: (DTDAdSize)adSize origin:(CGPoint)origin;

- (instancetype) initWithAdSize: (DTDAdSize)adSize;

#pragma mark Pre-Request

@property (nonatomic, copy) NSString * adUnitId;

@property (nonatomic, assign) DTDAdSize adSize;

@property (nonatomic, weak) id<DTDBannerViewDelegate> delegate;

@property (nonatomic, weak) UIViewController * rootViewController;

#pragma mark Making an Ad Request

- (void) loadAd;

@end
