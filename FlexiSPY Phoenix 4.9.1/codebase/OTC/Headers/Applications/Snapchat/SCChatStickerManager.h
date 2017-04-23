//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  4 2016 10:44:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, SCChatStickerPackage;
@protocol OS_dispatch_queue, SCChatStickerManagerDelegate, SCPerforming;

@interface SCChatStickerManager : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id <SCPerforming> _performer;
    NSMutableSet *_downloadingRequests;
    SCChatStickerPackage *_favoritePackage;
    SCChatStickerPackage *_searchPackage;
    SCChatStickerPackage *_bundlePackage;
    id <SCChatStickerManagerDelegate> _delegate;
    NSMutableArray *_stickerPackages;
    double _stickerThumbnailLength;
    double _stickerThumbnailMargin;
}

+ (void)listDirectory:(id)arg1;
+ (void)listRootPath;
+ (_Bool)removeFile:(id)arg1;
+ (_Bool)createFolder:(id)arg1;
+ (id)absolutePathForPath:(id)arg1;
+ (_Bool)_deviceDoesSupportEmoji:(id)arg1;
+ (id)emojiFromHexString:(id)arg1;
+ (id)shared;
+ (id)rootPath;
@property(readonly, nonatomic) double stickerThumbnailMargin; // @synthesize stickerThumbnailMargin=_stickerThumbnailMargin;
@property(readonly, nonatomic) double stickerThumbnailLength; // @synthesize stickerThumbnailLength=_stickerThumbnailLength;
@property(readonly, copy, nonatomic) NSMutableArray *stickerPackages; // @synthesize stickerPackages=_stickerPackages;
@property(nonatomic) __weak id <SCChatStickerManagerDelegate> delegate; // @synthesize delegate=_delegate;

- (_Bool)_didSaveData:(id)arg1 toDestination:(id)arg2 unzip:(_Bool)arg3;
- (void)_retryDownloadFileWithUrl:(id)arg1 completionBlock:(id)arg2;
- (void)_downloadFileWithUrl:(id)arg1 completionBlock:(id)arg2;
- (id)_generateThumbnailWithStickerImage:(id)arg1 thumbnailPath:(id)arg2;
- (void)_generateThumbnailsIfNecessaryWithPackage:(id)arg1;
- (id)fetchThumbnailImageWithSticker:(id)arg1 completionBlock:(id)arg2;
- (id)fetchStickerImageWithSticker:(id)arg1 completionBlock:(id)arg2;
- (id)fetchMetadataWithFolder:(id)arg1 downloadUrl:(id)arg2 completionBlock:(id)arg3;
- (id)fetchMetadataWithFolder:(id)arg1;
- (void)_removeLocalStickerPackageIfOutdated:(id)arg1;
- (_Bool)_haveAtLeastOneVisibleStickerWithMetadata:(id)arg1;
- (_Bool)_shouldShowPackage:(id)arg1 completionBlock:(id)arg2;
- (long long)_indexToInsertForPack:(id)arg1 stickerPacks:(id)arg2;
- (void)_removeBundlePackageIfNeededWithPackId:(id)arg1;
- (void)_loadStickerPackagesWithMetadata:(id)arg1;
- (id)_stickerPacksFromLocalDisk;
- (id)_stickerPacksFromResponseDictionary:(id)arg1;
- (void)_fetchStickerPackageMetadataWithCompletionBlock:(id)arg1;
- (void)_fetchStickerPackageMetadata;
- (void)loadStickerPackages;
- (void)updateSearchPackageBecauseAutoCorrectionUpdatedSearchResult;
- (void)updateSpecialPackages;
- (id)init;

@end
