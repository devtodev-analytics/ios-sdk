#import <Foundation/Foundation.h>

@interface ReferralProperty : NSObject <NSCopying>

@property (nonatomic, assign) NSString * propertyName;

+ (ReferralProperty *) Custom: (NSString *) propertyName;

@end

extern ReferralProperty * RFSource;
extern ReferralProperty * RFMedium;
extern ReferralProperty * RFContent;
extern ReferralProperty * RFCampaign;
extern ReferralProperty * RFTerm;