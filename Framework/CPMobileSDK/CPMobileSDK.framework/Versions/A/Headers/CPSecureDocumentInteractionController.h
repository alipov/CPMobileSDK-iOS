//
//  CPSecureDocumentInteractionController.h
//  OpenInTest
//
//  Created by Leo Natan on 2015-01-27.
//  Copyright (c) 2015 checkpoint. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 The @c CPSecureDocumentInteractionController class is a secure, encrypted @c UIDocumentInteractionController subclass. Using instances of this class, only secure applications may open the provided files.
 */
@interface CPSecureDocumentInteractionController : UIDocumentInteractionController

/**
 Sets the encryption key to use with @c CPSecureDocumentInteractionController instances.
 
 @param encryptionKey The encryption key to use with @c CPSecureDocumentInteractionController instances.
 */
+ (void)setEncryptionKey:(nullable NSData*)encryptionKey;

@end

NS_ASSUME_NONNULL_END