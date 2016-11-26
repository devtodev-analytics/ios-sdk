
#import <Foundation/Foundation.h>

@interface SocialNetwork : NSObject

@property (nonatomic, assign) NSString * socialNetworkName;

+ (SocialNetwork *) Custom: (NSString *) networkName;

@end

extern SocialNetwork * SNVk;
extern SocialNetwork * SNTwitter;
extern SocialNetwork * SNFacebook;
extern SocialNetwork * SNGooglePlus;
extern SocialNetwork * SNWhatsApp;
extern SocialNetwork * SNViber;
extern SocialNetwork * SNEvernote;
extern SocialNetwork * SNGoogleMail;
extern SocialNetwork * SNLinkedIn;
extern SocialNetwork * SNPinterest;
extern SocialNetwork * SNQzone;
extern SocialNetwork * SNReddit;
extern SocialNetwork * SNRenren;
extern SocialNetwork * SNTumblr;