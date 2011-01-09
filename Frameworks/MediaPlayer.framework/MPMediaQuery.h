/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaQueryInternal;



@interface MPMediaQuery : NSObject <NSCoding>
{
    MPMediaQueryInternal *_internal;
}

@property(retain) NSSet *filterPredicates;
@property(readonly) NSArray *items;
@property(readonly) NSArray *collections;
@property NSInteger groupingType;

+ (id)albumsQuery;
+ (id)artistsQuery;
+ (id)songsQuery;
+ (id)playlistsQuery;
+ (id)podcastsQuery;
+ (id)audiobooksQuery;
+ (id)compilationsQuery;
+ (id)composersQuery;
+ (id)genresQuery;
+ (id)videosQuery;

- (id)init;
- (id)initWithFilterPredicates:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)filterPredicates;
- (void)setFilterPredicates:(id)arg1;
- (void)addFilterPredicate:(id)arg1;
- (void)removeFilterPredicate:(id)arg1;
- (id)items;
- (id)collections;
- (NSInteger)groupingType;
- (void)setGroupingType:(NSInteger)arg1;
- (NSUInteger)countOfItems;
- (NSUInteger)countOfCollections;
- (void)_didReceiveMemoryWarning:(id)arg1;

@end