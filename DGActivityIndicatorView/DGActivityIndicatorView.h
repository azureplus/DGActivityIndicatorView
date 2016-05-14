//
//  DGActivityIndicatorView.h
//  DGActivityIndicatorExample
//
//  Created by Danil Gontovnik on 5/23/15.
//  Copyright (c) 2015 Danil Gontovnik. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, DGActivityIndicatorAnimationType) {
    DGActivityIndicatorAnimationTypeNineDots=0,
    DGActivityIndicatorAnimationTypeTriplePulse=1,
    DGActivityIndicatorAnimationTypeFiveDots=2,
    DGActivityIndicatorAnimationTypeRotatingSquares=3,
    DGActivityIndicatorAnimationTypeDoubleBounce=4,
    DGActivityIndicatorAnimationTypeTwoDots=5,
    DGActivityIndicatorAnimationTypeThreeDots=6,
    DGActivityIndicatorAnimationTypeBallPulse=7,
    DGActivityIndicatorAnimationTypeBallClipRotate=8,
    DGActivityIndicatorAnimationTypeBallClipRotatePulse=9,
    DGActivityIndicatorAnimationTypeBallClipRotateMultiple=10,
    DGActivityIndicatorAnimationTypeBallRotate=11,
    DGActivityIndicatorAnimationTypeBallZigZag=12,
    DGActivityIndicatorAnimationTypeBallZigZagDeflect=13,
    DGActivityIndicatorAnimationTypeBallTrianglePath=14,
    DGActivityIndicatorAnimationTypeBallScale=15,
    DGActivityIndicatorAnimationTypeLineScale=16,
    DGActivityIndicatorAnimationTypeLineScaleParty=17,
    DGActivityIndicatorAnimationTypeBallScaleMultiple=18,
    DGActivityIndicatorAnimationTypeBallPulseSync=19,
    DGActivityIndicatorAnimationTypeBallBeat=20,
    DGActivityIndicatorAnimationTypeLineScalePulseOut=21,
    DGActivityIndicatorAnimationTypeLineScalePulseOutRapid=22,
    DGActivityIndicatorAnimationTypeBallScaleRipple=23,
    DGActivityIndicatorAnimationTypeBallScaleRippleMultiple=24,
    DGActivityIndicatorAnimationTypeTriangleSkewSpin=25,
    DGActivityIndicatorAnimationTypeBallGridBeat=26,
    DGActivityIndicatorAnimationTypeBallGridPulse=27,
    DGActivityIndicatorAnimationTypeRotatingSandglass=28,
    DGActivityIndicatorAnimationTypeRotatingTrigons=29,
    DGActivityIndicatorAnimationTypeTripleRings=30,
    DGActivityIndicatorAnimationTypeCookieTerminator=31
};

@interface DGActivityIndicatorView : UIView

- (id)initWithType:(DGActivityIndicatorAnimationType)type;
- (id)initWithType:(DGActivityIndicatorAnimationType)type tintColor:(UIColor *)tintColor;
- (id)initWithType:(DGActivityIndicatorAnimationType)type tintColor:(UIColor *)tintColor size:(CGFloat)size;

@property (nonatomic) DGActivityIndicatorAnimationType type;
@property (nonatomic, strong) UIColor *tintColor;
@property (nonatomic) CGFloat size;

@property (nonatomic, readonly) BOOL animating;

- (void)startAnimating;
- (void)stopAnimating;

@end
