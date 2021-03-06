/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoUpload.framework/VideoUpload
 */

@class JSONHTTPRequest, NSString;

@interface VUAuthenticator : NSObject <JSONHTTPRequestDelegate> {
    NSString *_account;
    JSONHTTPRequest *_authenticationRequest;
    int _authenticatorState;
}

@property(readonly) NSString * account;
@property(readonly) int authenticatorState;

+ (id)sharedAuthenticator;

- (void)_notifyFailure;
- (void)_notifyStateChange;
- (id)account;
- (void)authenticateWithUsername:(id)arg1 password:(id)arg2;
- (id)authenticationDialogWithTarget:(id)arg1 action:(SEL)arg2;
- (int)authenticatorState;
- (void)invalidateAuthentication;
- (void)loadCredentials;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didReceiveObject:(id)arg2;

@end
