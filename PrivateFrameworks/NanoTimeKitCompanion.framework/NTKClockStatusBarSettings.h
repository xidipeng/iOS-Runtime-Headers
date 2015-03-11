/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@class NPSManager;

@interface NTKClockStatusBarSettings : NSObject {
    NPSManager *_npsManager;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handlePrefsChanged;
- (void)_notifyClientsOfChange;
- (void)dealloc;
- (id)init;
- (BOOL)isNotificationsIndicatorEnabled;
- (void)setNotificationsIndicatorEnabled:(BOOL)arg1;

@end