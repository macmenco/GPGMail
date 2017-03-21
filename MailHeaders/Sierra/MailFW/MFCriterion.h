//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "MailFW/CDStructures.h"

@class MFMailbox, NSArray, NSString;

@interface MFCriterion : NSObject <NSCopying>
{
    NSString *_criterionIdentifier;	// 8 = 0x8
    long long _criterionType;	// 16 = 0x10
    NSArray *_criteria;	// 24 = 0x18
    BOOL _dateIsRelative;	// 32 = 0x20
    BOOL _allCriteriaMustBeSatisfied;	// 33 = 0x21
    BOOL _originatedFromSearchSuggestion;	// 34 = 0x22
    int _specialMailboxType;	// 36 = 0x24
    NSString *_name;	// 40 = 0x28
    NSString *_expression;	// 48 = 0x30
    long long _qualifier;	// 56 = 0x38
    long long _dateUnits;	// 64 = 0x40
    unsigned long long _knownLimit;	// 72 = 0x48
    NSString *_uniqueId;	// 80 = 0x50
}

+ (BOOL)criteria:(id)arg1 areEqualToCriteria:(id)arg2;	// IMP=0x0000000000054931
+ (id)stringForCriterionType:(long long)arg1;	// IMP=0x000000000004eaf4
+ (long long)criterionTypeForString:(id)arg1;	// IMP=0x000000000004ea08
+ (id)queryScopePathForMailbox:(id)arg1;	// IMP=0x000000000004d524
+ (void)logSpotlightStatus;	// IMP=0x000000000004d341
+ (BOOL)logCriterionConversionErrors;	// IMP=0x000000000004d2c4
+ (void)setLogSpotlightCallbacks:(BOOL)arg1;	// IMP=0x000000000004d263
+ (BOOL)logSpotlightCallbacks;	// IMP=0x000000000004d1e6
+ (void)setLogSpotlightQueries:(BOOL)arg1;	// IMP=0x000000000004d185
+ (BOOL)logSpotlightQueries;	// IMP=0x000000000004d108
+ (id)compoundCriterionWithCriteria:(id)arg1;	// IMP=0x000000000004d054
+ (id)defaultsArrayFromCriteria:(id)arg1;	// IMP=0x000000000004ce4d
+ (id)criteriaFromDefaultsArray:(id)arg1 removingRecognizedKeys:(BOOL)arg2;	// IMP=0x000000000004cc03
+ (id)criteriaFromDefaultsArray:(id)arg1;	// IMP=0x000000000004cbec
@property(readonly, copy, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property BOOL originatedFromSearchSuggestion; // @synthesize originatedFromSearchSuggestion=_originatedFromSearchSuggestion;
@property unsigned long long knownLimit; // @synthesize knownLimit=_knownLimit;
@property int specialMailboxType; // @synthesize specialMailboxType=_specialMailboxType;
@property BOOL allCriteriaMustBeSatisfied; // @synthesize allCriteriaMustBeSatisfied=_allCriteriaMustBeSatisfied;
@property BOOL dateIsRelative; // @synthesize dateIsRelative=_dateIsRelative;
@property long long dateUnits; // @synthesize dateUnits=_dateUnits;
@property long long qualifier; // @synthesize qualifier=_qualifier;
@property(copy) NSString *expression; // @synthesize expression=_expression;
@property(copy) NSString *name; // @synthesize name=_name;
//- (void).cxx_destruct;	// IMP=0x0000000000055112
@property(readonly, nonatomic) BOOL containsJunkMailboxCriterion;
- (BOOL)isEqualToCriterion:(id)arg1;	// IMP=0x0000000000054676
- (BOOL)isValid:(id *)arg1 options:(unsigned int)arg2;	// IMP=0x00000000000544e7
- (id)_descriptionWithDepth:(unsigned long long)arg1 includePII:(BOOL)arg2;	// IMP=0x0000000000053f73
- (id)debugDescription;	// IMP=0x0000000000053f5a
- (id)description;	// IMP=0x0000000000053f44
@property(copy, nonatomic) NSArray *criteria;
@property(readonly, nonatomic) MFCriterion *reducedMailboxCriterion;
- (id)_simplifyOnce;	// IMP=0x0000000000053533
@property(readonly, nonatomic) MFCriterion *simplifiedCriterion;
- (id)stringForRuleQualifier:(long long)arg1;	// IMP=0x0000000000053383
- (long long)ruleQualifierForString:(id)arg1;	// IMP=0x0000000000053160
- (id)utiForMessageAttachmentType:(BOOL)arg1;	// IMP=0x00000000000530b0
- (id)_searchTermForExpression:(id)arg1 withQualifer:(long long)arg2 exactMatch:(BOOL)arg3;	// IMP=0x0000000000052fc0
- (id)_comparisonOperatorForQualifier:(long long)arg1;	// IMP=0x0000000000052e50
- (id)_spotlightQueryStringForCompoundCriterionWithInFlightURLs:(id)arg1;	// IMP=0x0000000000052b55
- (id)_spotlightStringForHeaderQueryString:(id)arg1 withSpotlightAttribute:(id)arg2;	// IMP=0x000000000005269d
- (id)escapedString:(id)arg1;	// IMP=0x0000000000052543
- (id)_spotlightQueryStringForAnyRecipientCriterion;	// IMP=0x000000000005241a
- (id)_spotlightQueryStringForHeaderCriterion;	// IMP=0x0000000000051fbd
- (id)_spotlightQueryStringForContainsAttachmentsCriterion;	// IMP=0x0000000000051f91
- (id)_spotlightQueryStringForAttachmentTypeCriterion;	// IMP=0x0000000000051ed1
- (id)_spotlightQueryStringForBodyCriterion;	// IMP=0x0000000000051c87
- (id)_spotlightDateQueryStringForAttribute:(id)arg1;	// IMP=0x0000000000051b29
- (id)_spotlightQueryStringForPriorityCriterion;	// IMP=0x0000000000051aba
- (id)_spotlightQueryStringForFlagCriterion;	// IMP=0x0000000000051978
- (id)_spotlightQueryStringForFlaggedStatusCriterion;	// IMP=0x00000000000518d3
- (id)_spotlightQueryStringForGroupOrVIPSendersCriterion;	// IMP=0x00000000000514c0
- (id)_spotlightQueryStringForAnyAttachmentCriterion;	// IMP=0x00000000000513e9
- (id)_spotlightQueryStringForAccountCriterion:(id)arg1;	// IMP=0x0000000000050de9
- (id)_spotlightQueryStringForGmailLabelCriterion;	// IMP=0x0000000000050c9f
- (id)_spotlightQueryStringForMailboxCriterion:(id)arg1;	// IMP=0x00000000000509a3
- (id)_spotlightQueryStringForNotInAJunkOrTrashMailboxCriterion;	// IMP=0x00000000000506f0
- (id)_spotlightQueryStringForInASpecialMailboxCriterionWithQualifier:(long long)arg1 inFlightURLs:(id)arg2;	// IMP=0x0000000000050039
- (id)_spotlightQueryStringForSize;	// IMP=0x000000000004ff80
- (id)_spotlightQueryStringForMessageID;	// IMP=0x000000000004fd94
@property(readonly, copy, nonatomic) NSString *spotlightQueryString;
- (id)_spotlightQueryStringWithInFlightURLs:(id)arg1;	// IMP=0x000000000004f8ea
- (BOOL)_isCompoundCriterionSpotlightCriterion;	// IMP=0x000000000004f790
@property(readonly, nonatomic) BOOL isSpotlightCriterion;
- (BOOL)_isSpotlightOnlyCriterion;	// IMP=0x000000000004f566
@property(readonly, nonatomic) BOOL containsVIPSendersCriterion;
- (BOOL)_containsVIPSendersCriterionWithInFlightURLs:(id)arg1;	// IMP=0x000000000004f273
@property(readonly, nonatomic) BOOL containsMailboxCriterion;
@property(readonly, nonatomic) BOOL containsWhereFromsCriterion;
@property(readonly, nonatomic) BOOL containsSpotlightOnlyCriterion;
@property(readonly, nonatomic) BOOL containsSpotlightCriterion;
- (id)_qualifierString;	// IMP=0x000000000004eb3e
@property(copy, nonatomic) NSString *criterionIdentifier;
- (void)_setCriterionIdentifier:(id)arg1;	// IMP=0x000000000004e9a7
@property(nonatomic) long long criterionType;
@property(readonly, nonatomic) BOOL hasExpression;
- (id)dictionaryRepresentationIncludePII:(BOOL)arg1;	// IMP=0x000000000004e313
- (id)dictionaryRepresentation;	// IMP=0x000000000004e2fc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004e284
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000004e26d
- (id)initWithCriterion:(id)arg1 expression:(id)arg2;	// IMP=0x000000000004e147
- (id)init;	// IMP=0x000000000004e131
- (id)initWithDictionary:(id)arg1 andRemoveRecognizedKeysIfMutable:(BOOL)arg2;	// IMP=0x000000000004dba0
@property(readonly, nonatomic) MFCriterion *compoundCriterionBySplittingExpression;
- (id)convertToGmailLabelCriterionIfNeeded;	// IMP=0x00000000000561b2
@property(readonly, nonatomic) unsigned long long bestBaseTable;
- (id)SQLExpressionWithTables:(unsigned long long *)arg1 baseTable:(unsigned long long)arg2;	// IMP=0x0000000000055cc4
@property(readonly, nonatomic) MFCriterion *criterionForSpotlight;
@property(readonly, nonatomic) MFCriterion *criterionForSQLIgnoringGmail;
@property(readonly, nonatomic) MFCriterion *criterionForSQL;
- (id)criterionValueForNotEqualRelativeDates:(long long *)arg1;	// IMP=0x000000000005560d
- (id)criterionExpressionForEqualRelativeDates:(CDStruct_c53ccb4e *)arg1 depth:(unsigned long long)arg2 enclosingSmartMailboxes:(id)arg3;	// IMP=0x000000000005531d
@property(readonly, nonatomic) BOOL isExpressibleInTigerSchema;
- (id)SQLExpressionWithContext:(CDStruct_c53ccb4e *)arg1 depth:(unsigned long long)arg2 enclosingSmartMailboxes:(id)arg3;	// IMP=0x0000000000059859
@property(readonly, nonatomic) BOOL hasNumberCriterion;
- (id)criterionByMergingSpotlightCriteria;	// IMP=0x00000000000596d7
- (id)fixOnceWithExpandedSmartMailboxes:(id)arg1 forSpotlight:(BOOL)arg2;	// IMP=0x00000000000591a7
- (id)criterionForSearchWithExpandedSmartMailboxes:(id)arg1 forSpotlight:(BOOL)arg2 convertingGmailCriteria:(BOOL)arg3;	// IMP=0x0000000000059018
@property(readonly, nonatomic) MFMailbox *targetSmartMailbox;

@end
