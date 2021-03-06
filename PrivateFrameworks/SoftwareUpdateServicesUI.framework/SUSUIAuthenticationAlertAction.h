/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI
 */

@interface SUSUIAuthenticationAlertAction : BSAction {
    SUAutoInstallOperation * _autoInstallOperation;
    BOOL  _canDeferInstallation;
    SUDownload * _download;
    BOOL  _forInstallTonight;
    BOOL  _loaded;
}

@property (nonatomic, readonly, retain) SUAutoInstallOperation *autoInstallOperation;
@property (nonatomic, readonly) BOOL canDeferInstallation;
@property (nonatomic, readonly, retain) SUDownload *download;
@property (nonatomic, readonly) BOOL forInstallTonight;

- (void).cxx_destruct;
- (void)_loadIfNecessary;
- (id)autoInstallOperation;
- (BOOL)canDeferInstallation;
- (id)download;
- (void)fireCompletionIfNecessaryForResult:(BOOL)arg1;
- (BOOL)forInstallTonight;
- (id)initWithDownload:(id)arg1 autoInstallOperation:(id)arg2 forInstallTonight:(BOOL)arg3 canDeferInstallation:(BOOL)arg4 completionBlock:(id /* block */)arg5;

@end
