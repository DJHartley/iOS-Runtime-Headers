/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@interface WebFixedPositionContent : NSObject {
    struct WebFixedPositionContentData { id x1; struct HashMap<WTF::RetainPtr<CALayer>, WTF::OwnPtr<WebCore::ViewportConstraints>, WTF::PtrHash<WTF::RetainPtr<CALayer>>, WTF::HashTraits<WTF::RetainPtr<CALayer>>, WTF::HashTraits<WTF::OwnPtr<WebCore::ViewportConstraints>> > { struct HashTable<WTF::RetainPtr<CALayer>, std::__1::pair<WTF::RetainPtr<CALayer>, WTF::OwnPtr<WebCore::ViewportConstraints>>, WTF::PairFirstExtractor<std::__1::pair<WTF::RetainPtr<CALayer>, WTF::OwnPtr<WebCore::ViewportConstraints>>>, WTF::PtrHash<WTF::RetainPtr<CALayer>>, WTF::HashMapValueTraits<WTF::HashTraits<WTF::RetainPtr<CALayer>>, WTF::HashTraits<WTF::OwnPtr<WebCore::ViewportConstraints>>>, WTF::HashTraits<WTF::RetainPtr<CALayer>> > { struct pair<WTF::RetainPtr<CALayer>, WTF::OwnPtr<WebCore::ViewportConstraints> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_2_1_1; } x2; } *_private;
}

- (void)addOrUpdateLayer:(id)arg1 viewportConstraints:(struct PassOwnPtr<WebCore::ViewportConstraints> { struct ViewportConstraints {} *x1; })arg2 insideLayerSync:(BOOL)arg3;
- (void)dealloc;
- (void)didFinishScrollingOrZooming;
- (BOOL)hasFixedPositionLayers;
- (id)initWithWebView:(id)arg1;
- (void)lockLayers;
- (void)removeAllLayers;
- (void)removeLayer:(id)arg1 insideLayerSync:(BOOL)arg2;
- (void)scrollOrZoomChanged:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)unlockLayers;

@end
