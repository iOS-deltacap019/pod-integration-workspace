//
//  MTRGNativeAd.h
//  myTargetSDK 4.8.8
//
//  Created by Anton Bulankin on 10.11.14.
//  Copyright (c) 2014 Mail.ru Group. All rights reserved.
//

#import <MyTargetSDK/MTRGNativePromoBanner.h>

typedef enum : NSUInteger
{
	MTRGAdChoicesPlacementTopLeft,
	MTRGAdChoicesPlacementTopRight,
	MTRGAdChoicesPlacementBottomLeft,
	MTRGAdChoicesPlacementBottomRight
} MTRGAdChoicesPlacement;

NS_ASSUME_NONNULL_BEGIN

@class MTRGNativeAd;
@class MTRGCustomParams;

@protocol MTRGNativeAdDelegate <NSObject>

- (void)onLoadWithNativePromoBanner:(MTRGNativePromoBanner *)promoBanner nativeAd:(MTRGNativeAd *)nativeAd;

- (void)onNoAdWithReason:(NSString *)reason nativeAd:(MTRGNativeAd *)nativeAd;

@optional

- (void)onAdShowWithNativeAd:(MTRGNativeAd *)nativeAd;

- (void)onAdClickWithNativeAd:(MTRGNativeAd *)nativeAd;

- (void)onShowModalWithNativeAd:(MTRGNativeAd *)nativeAd;

- (void)onDismissModalWithNativeAd:(MTRGNativeAd *)nativeAd;

- (void)onLeaveApplicationWithNativeAd:(MTRGNativeAd *)nativeAd;

- (void)onVideoPlayWithNativeAd:(MTRGNativeAd *)nativeAd;

- (void)onVideoPauseWithNativeAd:(MTRGNativeAd *)nativeAd;

- (void)onVideoCompleteWithNativeAd:(MTRGNativeAd *)nativeAd;

@end

@interface MTRGNativeAd : NSObject

@property(nonatomic, weak, nullable) id <MTRGNativeAdDelegate> delegate;
@property(nonatomic, readonly, nullable) MTRGNativePromoBanner *banner;
@property(nonatomic, readonly, nullable) MTRGCustomParams *customParams;
@property(nonatomic) MTRGAdChoicesPlacement adChoicesPlacement;
@property(nonatomic) BOOL autoLoadImages;
@property(nonatomic) BOOL autoLoadVideo;
@property(nonatomic) BOOL trackLocationEnabled;

+ (void)setDebugMode:(BOOL)enabled;

+ (BOOL)isDebugMode;

+ (void)loadImage:(MTRGImageData *)imageData toView:(UIImageView *)imageView;

- (nullable instancetype)initWithSlotId:(NSUInteger)slotId;

- (void)load;

- (void)loadFromBid:(NSString *)bidId;

- (void)registerView:(UIView *)containerView withController:(UIViewController *)controller;

- (void)registerView:(UIView *)containerView withController:(UIViewController *)controller withClickableViews:(nullable NSArray<UIView *> *)clickableViews;

- (void)unregisterView;

@end

NS_ASSUME_NONNULL_END
