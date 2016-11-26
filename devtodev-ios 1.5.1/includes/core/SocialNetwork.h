
#import <Foundation/Foundation.h>

@interface SocialNetwork : NSObject

@property (nonatomic, assign) NSString * socialNetworkName;

+ (SocialNetwork *) Custom: (NSString *) networkName;

@end

extern SocialNetwork * SNVk;
extern SocialNetwork * SNTwitter;
extern SocialNetwork * SNFacebook;
extern SocialNetwork * SNGooglePlus;