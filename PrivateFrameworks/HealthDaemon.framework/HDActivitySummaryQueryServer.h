/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDActivitySummaryQueryServer : HDQueryServer {
    BOOL  _deliversUpdates;
    HDSQLitePredicate * _filterPredicate;
    int  _lastProcessedAnchor;
    HDActivitySummaryQueryHelper * _queryHelper;
    BOOL  _shouldIncludePrivateProperties;
}

- (void).cxx_destruct;
- (void)_queue_deliverActivitySummariesToClient:(id)arg1;
- (void)_queue_deliverErrorToClient:(id)arg1;
- (void)_queue_deliverResultsWithActivitySummaries:(id)arg1 error:(id)arg2;
- (void)_queue_start;
- (void)_queue_stop;
- (void)_setUpInitialQueryHelper;
- (id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;

@end