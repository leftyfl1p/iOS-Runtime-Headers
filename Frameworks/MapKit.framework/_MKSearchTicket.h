/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKSearchTicket : _MKTicket <MKMapServiceSearchTicket>

@property (nonatomic, readonly) GEOMapRegion *boundingRegion;
@property (getter=isChainResultSet, nonatomic, readonly) BOOL chainResultSet;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) GEORelatedSearchSuggestion *defaultRelatedSuggestion;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSArray *exactMapItems;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSArray *refinedMapItems;
@property (nonatomic, readonly) NSArray *relatedSearchSuggestions;
@property (nonatomic, readonly) double requestResponseTime;
@property (nonatomic, readonly) NSString *resultDisplayHeader;
@property (nonatomic, readonly) NSString *searchQuery;
@property (nonatomic, readonly) int searchResultType;
@property (nonatomic, readonly) NSString *sectionHeader;
@property (nonatomic, readonly) BOOL shouldEnableRedoSearch;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (id)initWithSearchTicket:(id)arg1;
- (id)searchQuery;

@end
