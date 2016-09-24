/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFWallpaperLegacyFileManager : NSObject {
    NSURL * _wallpaperFolderURL;
}

@property (nonatomic, retain) NSURL *wallpaperFolderURL;

- (void).cxx_destruct;
- (id)clearAllWallpapers;
- (id)filenameForType:(int)arg1 variant:(int)arg2;
- (id)init;
- (void)migrateCache:(id /* block */)arg1;
- (void)setWallpaperFolderURL:(id)arg1;
- (id)wallpaperFolderURL;

@end