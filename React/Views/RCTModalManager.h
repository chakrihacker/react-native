/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <UIKit/UIKit.h>

#import <React/RCTBridge.h>
#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>

@interface RCTModalManager : RCTEventEmitter <RCTBridgeModule>

- (void)modalDismissed:(NSNumber *)modalID;

@end

@interface RCTBridge (RCTModalManager)

@property (nonatomic, readonly) RCTModalManager *modalManager;

@end
