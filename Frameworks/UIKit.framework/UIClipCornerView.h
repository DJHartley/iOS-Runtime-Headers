/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage;

@interface UIClipCornerView : UIView {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    UIImage *_backgroundImage;
    } _backgroundImageSubrect;
    } _backgroundTransform;
    struct CGPath { } *_clipPath;
    float _cornerRadius;
    } _pathOrigin;
    NSInteger _rectCorner;
    BOOL _useSnapshot;
}

@property(retain) UIImage *backgroundImage;
@property CGRect backgroundImageSubrect;
@property float cornerRadius;
@property BOOL useSnapshot;

- (void)_updateCornerPath;
- (void)_updateSnapshot;
- (id)backgroundImage;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })backgroundImageSubrect;
- (float)cornerRadius;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithCornerRadius:(float)arg1 forCorner:(NSInteger)arg2;
- (void)setBackgroundImage:(id)arg1;
- (void)setBackgroundImageSubrect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCornerRadius:(float)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setUseSnapshot:(BOOL)arg1;
- (BOOL)useSnapshot;

@end