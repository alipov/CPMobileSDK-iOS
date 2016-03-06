//
//  CPSecurePasteboard.h
//  CPMobileSDK
//
//  Created by Leo Natan on 2015-01-22.
//  Copyright (c) 2015 Leo Natan. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 The @c CPSecurePasteboard class is a secure, encrypted @c UIPasteboard subclass. Once encryption key is set, objects stored using instances of @c CPSecurePasteboard are encrypted before storage. An external message is provided for the users if they paste content outside of secured applications.
 */

@interface CPSecurePasteboard : UIPasteboard

/**
 Sets the encryption key to use with @c CPSecurePasteboard instances. Setting the encryption key to @c nil will cause instances of @c CPSecurePasteboard to store objects in clear.
 
 @param encryptionKey The encryption key to use with @c CPSecurePasteboard instances.
 */
+ (void)setEncryptionKey:(nullable NSData*)encryptionKey;
/**
 The external message to display to users if they paste content outside of secured applications. By default, the external message is "Pasteboard secured by Check Point.".
 
 @param externalMessage The external message to display.
 */
+ (void)setExternalMessage:(NSString*)externalMessage;

@end

NS_ASSUME_NONNULL_END