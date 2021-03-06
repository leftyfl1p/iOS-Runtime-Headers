/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerFrameCounterStats : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    AWDControlFrames * _rxControl;
    AWDDataFrames * _rxData;
    AWDManagementFrames * _rxManagement;
    unsigned long long  _timestamp;
    AWDControlFrames * _txControl;
    AWDDataFrames * _txData;
    AWDManagementFrames * _txManagement;
}

@property (nonatomic, readonly) BOOL hasRxControl;
@property (nonatomic, readonly) BOOL hasRxData;
@property (nonatomic, readonly) BOOL hasRxManagement;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, readonly) BOOL hasTxControl;
@property (nonatomic, readonly) BOOL hasTxData;
@property (nonatomic, readonly) BOOL hasTxManagement;
@property (nonatomic, retain) AWDControlFrames *rxControl;
@property (nonatomic, retain) AWDDataFrames *rxData;
@property (nonatomic, retain) AWDManagementFrames *rxManagement;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) AWDControlFrames *txControl;
@property (nonatomic, retain) AWDDataFrames *txData;
@property (nonatomic, retain) AWDManagementFrames *txManagement;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasRxControl;
- (BOOL)hasRxData;
- (BOOL)hasRxManagement;
- (BOOL)hasTimestamp;
- (BOOL)hasTxControl;
- (BOOL)hasTxData;
- (BOOL)hasTxManagement;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)rxControl;
- (id)rxData;
- (id)rxManagement;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setRxControl:(id)arg1;
- (void)setRxData:(id)arg1;
- (void)setRxManagement:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTxControl:(id)arg1;
- (void)setTxData:(id)arg1;
- (void)setTxManagement:(id)arg1;
- (unsigned long long)timestamp;
- (id)txControl;
- (id)txData;
- (id)txManagement;
- (void)writeTo:(id)arg1;

@end
