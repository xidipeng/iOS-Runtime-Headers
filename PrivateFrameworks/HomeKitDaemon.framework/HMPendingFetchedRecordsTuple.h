/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMPendingFetchedRecordsTuple : NSObject {
    NSData * _encodedData1;
    NSData * _encodedData2;
    NSData * _encodedData3;
    unsigned int  _migrationOptions;
}

@property (nonatomic, retain) NSData *encodedData1;
@property (nonatomic, retain) NSData *encodedData2;
@property (nonatomic, retain) NSData *encodedData3;
@property (nonatomic) unsigned int migrationOptions;

+ (id)tupleWithEncodedData:(id)arg1 encodedDataVersion2:(id)arg2 encodedDataVersion3:(id)arg3 migrationOptions:(unsigned int)arg4;

- (void).cxx_destruct;
- (id)encodedData1;
- (id)encodedData2;
- (id)encodedData3;
- (unsigned int)migrationOptions;
- (void)setEncodedData1:(id)arg1;
- (void)setEncodedData2:(id)arg1;
- (void)setEncodedData3:(id)arg1;
- (void)setMigrationOptions:(unsigned int)arg1;

@end
