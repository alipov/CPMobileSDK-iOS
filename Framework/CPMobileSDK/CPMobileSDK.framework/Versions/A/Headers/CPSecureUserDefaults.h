//
//  CPSecureUserDefaults.h
//  CPMobileSDK
//
//  Created by Leo Natan on 2015-10-26.
//  Copyright © 2015 Leo Natan. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 The @c CPSecureUserDefaults class is a secure, encrypted @c NSUserDefaults subclass. Once encryption key is set, objects stored using instances of @c CPSecureUserDefaults are encrypted before storage.
 */
@interface CPSecureUserDefaults : NSUserDefaults

/**
 Sets the encryption key to use with @c CPSecureUserDefaults instances. Setting the encryption key to @c nil will cause instances of @c CPSecureUserDefaults to store objects in clear.
 
 @param encryptionKey The encryption key to use with @c CPSecureUserDefaults instances.
 */
+ (void)setEncryptionKey:(nullable NSData*)encryptionKey;

@end

NS_ASSUME_NONNULL_END