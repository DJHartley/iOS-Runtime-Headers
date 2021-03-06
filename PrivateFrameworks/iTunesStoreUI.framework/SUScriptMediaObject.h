/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableArray, NSString, SUMediaObject;

@interface SUScriptMediaObject : SUScriptObject {
    NSMutableArray *_scriptFunctions;
    unsigned int _thumbnailOffset;
}

@property(readonly) NSString * mediaType;
@property(readonly) SUMediaObject * nativeMediaObject;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (void)_addScriptFunction:(id)arg1;
- (id)_className;
- (void)_removeScriptFunction:(id)arg1;
- (id)attributeKeys;
- (void)dealloc;
- (void)generateThumbnailWithMaximumSize:(int)arg1 completionHandler:(id)arg2;
- (id)init;
- (id)initWithNativeMediaObject:(id)arg1;
- (void)loadLibraryThumbnailWithCompletionHandler:(id)arg1;
- (id)mediaType;
- (id)nativeMediaObject;
- (void)saveToLibraryWithCompletionHandler:(id)arg1;
- (id)scriptAttributeKeys;
- (id)thumbnailWithMaximumSize:(int)arg1;
- (id)valueForProperty:(id)arg1;

@end
