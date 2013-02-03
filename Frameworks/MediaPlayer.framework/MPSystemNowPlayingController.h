/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSDictionary;

@interface MPSystemNowPlayingController : NSObject {
    BOOL _hasSeenAnyItem;
    NSDictionary *_lastNowPlayingInfo;
    unsigned long long _lastPostedNowPlayingItemPersistentID;
}

+ (id)sharedInstance;

- (void)_availableRoutesDidChangeNotification:(id)arg1;
- (id)_init;
- (void)_sendAirTunesMetadataForItem:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)postNowPlayingInfoForItem:(id)arg1 isPlaying:(BOOL)arg2 additionalInfo:(id)arg3;
- (void)postProgressUpdateForItem:(id)arg1;

@end