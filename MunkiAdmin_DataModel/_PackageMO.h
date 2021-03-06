// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to PackageMO.h instead.

#import <CoreData/CoreData.h>


extern const struct PackageMOAttributes {
	 NSString *munki_RestartAction;
	 NSString *munki_autoremove;
	 NSString *munki_description;
	 NSString *munki_display_name;
	 NSString *munki_force_install_after_date;
	 NSString *munki_forced_install;
	 NSString *munki_forced_uninstall;
	 NSString *munki_installed_size;
	 NSString *munki_installer_item_hash;
	 NSString *munki_installer_item_location;
	 NSString *munki_installer_item_size;
	 NSString *munki_installer_type;
	 NSString *munki_maximum_os_version;
	 NSString *munki_minimum_os_version;
	 NSString *munki_name;
	 NSString *munki_package_path;
	 NSString *munki_postinstall_script;
	 NSString *munki_postuninstall_script;
	 NSString *munki_preinstall_script;
	 NSString *munki_preuninstall_script;
	 NSString *munki_receipts;
	 NSString *munki_suppress_bundle_relocation;
	 NSString *munki_unattended_install;
	 NSString *munki_unattended_uninstall;
	 NSString *munki_uninstall_method;
	 NSString *munki_uninstall_script;
	 NSString *munki_uninstallable;
	 NSString *munki_uninstaller_item_location;
	 NSString *munki_version;
	 NSString *originalPkginfo;
	 NSString *packageInfoURL;
	 NSString *packageURL;
	 NSString *titleWithVersion;
} PackageMOAttributes;

extern const struct PackageMORelationships {
	 NSString *blockingApplications;
	 NSString *catalogInfos;
	 NSString *catalogs;
	 NSString *installerChoicesItems;
	 NSString *installsItems;
	 NSString *itemsToCopy;
	 NSString *packageInfos;
	 NSString *parentApplication;
	 NSString *receipts;
	 NSString *referencingStringObjects;
	 NSString *requirements;
	 NSString *supportedArchitectures;
	 NSString *updateFor;
} PackageMORelationships;

extern const struct PackageMOFetchedProperties {
} PackageMOFetchedProperties;

@class StringObjectMO;
@class CatalogInfoMO;
@class CatalogMO;
@class InstallerChoicesItemMO;
@class InstallsItemMO;
@class ItemToCopyMO;
@class PackageInfoMO;
@class ApplicationMO;
@class ReceiptMO;
@class StringObjectMO;
@class StringObjectMO;
@class StringObjectMO;
@class StringObjectMO;






























@class NSObject;
@class NSObject;
@class NSObject;


@interface PackageMOID : NSManagedObjectID {}
@end

@interface _PackageMO : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (PackageMOID*)objectID;




@property (nonatomic, retain) NSString *munki_RestartAction;


//- (BOOL)validateMunki_RestartAction:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSNumber *munki_autoremove;


@property BOOL munki_autoremoveValue;
- (BOOL)munki_autoremoveValue;
- (void)setMunki_autoremoveValue:(BOOL)value_;

//- (BOOL)validateMunki_autoremove:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSString *munki_description;


//- (BOOL)validateMunki_description:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSString *munki_display_name;


//- (BOOL)validateMunki_display_name:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSDate *munki_force_install_after_date;


//- (BOOL)validateMunki_force_install_after_date:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSNumber *munki_forced_install;


@property BOOL munki_forced_installValue;
- (BOOL)munki_forced_installValue;
- (void)setMunki_forced_installValue:(BOOL)value_;

//- (BOOL)validateMunki_forced_install:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSNumber *munki_forced_uninstall;


@property BOOL munki_forced_uninstallValue;
- (BOOL)munki_forced_uninstallValue;
- (void)setMunki_forced_uninstallValue:(BOOL)value_;

//- (BOOL)validateMunki_forced_uninstall:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSNumber *munki_installed_size;


@property long long munki_installed_sizeValue;
- (long long)munki_installed_sizeValue;
- (void)setMunki_installed_sizeValue:(long long)value_;

//- (BOOL)validateMunki_installed_size:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSString *munki_installer_item_hash;


//- (BOOL)validateMunki_installer_item_hash:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSString *munki_installer_item_location;


//- (BOOL)validateMunki_installer_item_location:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSNumber *munki_installer_item_size;


@property long long munki_installer_item_sizeValue;
- (long long)munki_installer_item_sizeValue;
- (void)setMunki_installer_item_sizeValue:(long long)value_;

//- (BOOL)validateMunki_installer_item_size:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSString *munki_installer_type;


//- (BOOL)validateMunki_installer_type:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSString *munki_maximum_os_version;


//- (BOOL)validateMunki_maximum_os_version:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSString *munki_minimum_os_version;


//- (BOOL)validateMunki_minimum_os_version:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSString *munki_name;


//- (BOOL)validateMunki_name:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSString *munki_package_path;


//- (BOOL)validateMunki_package_path:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSString *munki_postinstall_script;


//- (BOOL)validateMunki_postinstall_script:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSString *munki_postuninstall_script;


//- (BOOL)validateMunki_postuninstall_script:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSString *munki_preinstall_script;


//- (BOOL)validateMunki_preinstall_script:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSString *munki_preuninstall_script;


//- (BOOL)validateMunki_preuninstall_script:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSString *munki_receipts;


//- (BOOL)validateMunki_receipts:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSNumber *munki_suppress_bundle_relocation;


@property BOOL munki_suppress_bundle_relocationValue;
- (BOOL)munki_suppress_bundle_relocationValue;
- (void)setMunki_suppress_bundle_relocationValue:(BOOL)value_;

//- (BOOL)validateMunki_suppress_bundle_relocation:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSNumber *munki_unattended_install;


@property BOOL munki_unattended_installValue;
- (BOOL)munki_unattended_installValue;
- (void)setMunki_unattended_installValue:(BOOL)value_;

//- (BOOL)validateMunki_unattended_install:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSNumber *munki_unattended_uninstall;


@property BOOL munki_unattended_uninstallValue;
- (BOOL)munki_unattended_uninstallValue;
- (void)setMunki_unattended_uninstallValue:(BOOL)value_;

//- (BOOL)validateMunki_unattended_uninstall:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSString *munki_uninstall_method;


//- (BOOL)validateMunki_uninstall_method:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSString *munki_uninstall_script;


//- (BOOL)validateMunki_uninstall_script:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSNumber *munki_uninstallable;


@property BOOL munki_uninstallableValue;
- (BOOL)munki_uninstallableValue;
- (void)setMunki_uninstallableValue:(BOOL)value_;

//- (BOOL)validateMunki_uninstallable:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSString *munki_uninstaller_item_location;


//- (BOOL)validateMunki_uninstaller_item_location:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSString *munki_version;


//- (BOOL)validateMunki_version:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSObject *originalPkginfo;


//- (BOOL)validateOriginalPkginfo:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSObject *packageInfoURL;


//- (BOOL)validatePackageInfoURL:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSObject *packageURL;


//- (BOOL)validatePackageURL:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSString *titleWithVersion;


//- (BOOL)validateTitleWithVersion:(id*)value_ error:(NSError**)error_;





@property (nonatomic, retain) NSSet* blockingApplications;

- (NSMutableSet*)blockingApplicationsSet;




@property (nonatomic, retain) NSSet* catalogInfos;

- (NSMutableSet*)catalogInfosSet;




@property (nonatomic, retain) NSSet* catalogs;

- (NSMutableSet*)catalogsSet;




@property (nonatomic, retain) NSSet* installerChoicesItems;

- (NSMutableSet*)installerChoicesItemsSet;




@property (nonatomic, retain) NSSet* installsItems;

- (NSMutableSet*)installsItemsSet;




@property (nonatomic, retain) NSSet* itemsToCopy;

- (NSMutableSet*)itemsToCopySet;




@property (nonatomic, retain) NSSet* packageInfos;

- (NSMutableSet*)packageInfosSet;




@property (nonatomic, retain) ApplicationMO* parentApplication;

//- (BOOL)validateParentApplication:(id*)value_ error:(NSError**)error_;




@property (nonatomic, retain) NSSet* receipts;

- (NSMutableSet*)receiptsSet;




@property (nonatomic, retain) NSSet* referencingStringObjects;

- (NSMutableSet*)referencingStringObjectsSet;




@property (nonatomic, retain) NSSet* requirements;

- (NSMutableSet*)requirementsSet;




@property (nonatomic, retain) NSSet* supportedArchitectures;

- (NSMutableSet*)supportedArchitecturesSet;




@property (nonatomic, retain) NSSet* updateFor;

- (NSMutableSet*)updateForSet;




@end

@interface _PackageMO (CoreDataGeneratedAccessors)

- (void)addBlockingApplications:(NSSet*)value_;
- (void)removeBlockingApplications:(NSSet*)value_;
- (void)addBlockingApplicationsObject:(StringObjectMO*)value_;
- (void)removeBlockingApplicationsObject:(StringObjectMO*)value_;

- (void)addCatalogInfos:(NSSet*)value_;
- (void)removeCatalogInfos:(NSSet*)value_;
- (void)addCatalogInfosObject:(CatalogInfoMO*)value_;
- (void)removeCatalogInfosObject:(CatalogInfoMO*)value_;

- (void)addCatalogs:(NSSet*)value_;
- (void)removeCatalogs:(NSSet*)value_;
- (void)addCatalogsObject:(CatalogMO*)value_;
- (void)removeCatalogsObject:(CatalogMO*)value_;

- (void)addInstallerChoicesItems:(NSSet*)value_;
- (void)removeInstallerChoicesItems:(NSSet*)value_;
- (void)addInstallerChoicesItemsObject:(InstallerChoicesItemMO*)value_;
- (void)removeInstallerChoicesItemsObject:(InstallerChoicesItemMO*)value_;

- (void)addInstallsItems:(NSSet*)value_;
- (void)removeInstallsItems:(NSSet*)value_;
- (void)addInstallsItemsObject:(InstallsItemMO*)value_;
- (void)removeInstallsItemsObject:(InstallsItemMO*)value_;

- (void)addItemsToCopy:(NSSet*)value_;
- (void)removeItemsToCopy:(NSSet*)value_;
- (void)addItemsToCopyObject:(ItemToCopyMO*)value_;
- (void)removeItemsToCopyObject:(ItemToCopyMO*)value_;

- (void)addPackageInfos:(NSSet*)value_;
- (void)removePackageInfos:(NSSet*)value_;
- (void)addPackageInfosObject:(PackageInfoMO*)value_;
- (void)removePackageInfosObject:(PackageInfoMO*)value_;

- (void)addReceipts:(NSSet*)value_;
- (void)removeReceipts:(NSSet*)value_;
- (void)addReceiptsObject:(ReceiptMO*)value_;
- (void)removeReceiptsObject:(ReceiptMO*)value_;

- (void)addReferencingStringObjects:(NSSet*)value_;
- (void)removeReferencingStringObjects:(NSSet*)value_;
- (void)addReferencingStringObjectsObject:(StringObjectMO*)value_;
- (void)removeReferencingStringObjectsObject:(StringObjectMO*)value_;

- (void)addRequirements:(NSSet*)value_;
- (void)removeRequirements:(NSSet*)value_;
- (void)addRequirementsObject:(StringObjectMO*)value_;
- (void)removeRequirementsObject:(StringObjectMO*)value_;

- (void)addSupportedArchitectures:(NSSet*)value_;
- (void)removeSupportedArchitectures:(NSSet*)value_;
- (void)addSupportedArchitecturesObject:(StringObjectMO*)value_;
- (void)removeSupportedArchitecturesObject:(StringObjectMO*)value_;

- (void)addUpdateFor:(NSSet*)value_;
- (void)removeUpdateFor:(NSSet*)value_;
- (void)addUpdateForObject:(StringObjectMO*)value_;
- (void)removeUpdateForObject:(StringObjectMO*)value_;

@end

@interface _PackageMO (CoreDataGeneratedPrimitiveAccessors)


- (NSString*)primitiveMunki_RestartAction;
- (void)setPrimitiveMunki_RestartAction:(NSString*)value;




- (NSNumber*)primitiveMunki_autoremove;
- (void)setPrimitiveMunki_autoremove:(NSNumber*)value;

- (BOOL)primitiveMunki_autoremoveValue;
- (void)setPrimitiveMunki_autoremoveValue:(BOOL)value_;




- (NSString*)primitiveMunki_description;
- (void)setPrimitiveMunki_description:(NSString*)value;




- (NSString*)primitiveMunki_display_name;
- (void)setPrimitiveMunki_display_name:(NSString*)value;




- (NSDate*)primitiveMunki_force_install_after_date;
- (void)setPrimitiveMunki_force_install_after_date:(NSDate*)value;




- (NSNumber*)primitiveMunki_forced_install;
- (void)setPrimitiveMunki_forced_install:(NSNumber*)value;

- (BOOL)primitiveMunki_forced_installValue;
- (void)setPrimitiveMunki_forced_installValue:(BOOL)value_;




- (NSNumber*)primitiveMunki_forced_uninstall;
- (void)setPrimitiveMunki_forced_uninstall:(NSNumber*)value;

- (BOOL)primitiveMunki_forced_uninstallValue;
- (void)setPrimitiveMunki_forced_uninstallValue:(BOOL)value_;




- (NSNumber*)primitiveMunki_installed_size;
- (void)setPrimitiveMunki_installed_size:(NSNumber*)value;

- (long long)primitiveMunki_installed_sizeValue;
- (void)setPrimitiveMunki_installed_sizeValue:(long long)value_;




- (NSString*)primitiveMunki_installer_item_hash;
- (void)setPrimitiveMunki_installer_item_hash:(NSString*)value;




- (NSString*)primitiveMunki_installer_item_location;
- (void)setPrimitiveMunki_installer_item_location:(NSString*)value;




- (NSNumber*)primitiveMunki_installer_item_size;
- (void)setPrimitiveMunki_installer_item_size:(NSNumber*)value;

- (long long)primitiveMunki_installer_item_sizeValue;
- (void)setPrimitiveMunki_installer_item_sizeValue:(long long)value_;




- (NSString*)primitiveMunki_installer_type;
- (void)setPrimitiveMunki_installer_type:(NSString*)value;




- (NSString*)primitiveMunki_maximum_os_version;
- (void)setPrimitiveMunki_maximum_os_version:(NSString*)value;




- (NSString*)primitiveMunki_minimum_os_version;
- (void)setPrimitiveMunki_minimum_os_version:(NSString*)value;




- (NSString*)primitiveMunki_name;
- (void)setPrimitiveMunki_name:(NSString*)value;




- (NSString*)primitiveMunki_package_path;
- (void)setPrimitiveMunki_package_path:(NSString*)value;




- (NSString*)primitiveMunki_postinstall_script;
- (void)setPrimitiveMunki_postinstall_script:(NSString*)value;




- (NSString*)primitiveMunki_postuninstall_script;
- (void)setPrimitiveMunki_postuninstall_script:(NSString*)value;




- (NSString*)primitiveMunki_preinstall_script;
- (void)setPrimitiveMunki_preinstall_script:(NSString*)value;




- (NSString*)primitiveMunki_preuninstall_script;
- (void)setPrimitiveMunki_preuninstall_script:(NSString*)value;




- (NSString*)primitiveMunki_receipts;
- (void)setPrimitiveMunki_receipts:(NSString*)value;




- (NSNumber*)primitiveMunki_suppress_bundle_relocation;
- (void)setPrimitiveMunki_suppress_bundle_relocation:(NSNumber*)value;

- (BOOL)primitiveMunki_suppress_bundle_relocationValue;
- (void)setPrimitiveMunki_suppress_bundle_relocationValue:(BOOL)value_;




- (NSNumber*)primitiveMunki_unattended_install;
- (void)setPrimitiveMunki_unattended_install:(NSNumber*)value;

- (BOOL)primitiveMunki_unattended_installValue;
- (void)setPrimitiveMunki_unattended_installValue:(BOOL)value_;




- (NSNumber*)primitiveMunki_unattended_uninstall;
- (void)setPrimitiveMunki_unattended_uninstall:(NSNumber*)value;

- (BOOL)primitiveMunki_unattended_uninstallValue;
- (void)setPrimitiveMunki_unattended_uninstallValue:(BOOL)value_;




- (NSString*)primitiveMunki_uninstall_method;
- (void)setPrimitiveMunki_uninstall_method:(NSString*)value;




- (NSString*)primitiveMunki_uninstall_script;
- (void)setPrimitiveMunki_uninstall_script:(NSString*)value;




- (NSNumber*)primitiveMunki_uninstallable;
- (void)setPrimitiveMunki_uninstallable:(NSNumber*)value;

- (BOOL)primitiveMunki_uninstallableValue;
- (void)setPrimitiveMunki_uninstallableValue:(BOOL)value_;




- (NSString*)primitiveMunki_uninstaller_item_location;
- (void)setPrimitiveMunki_uninstaller_item_location:(NSString*)value;




- (NSString*)primitiveMunki_version;
- (void)setPrimitiveMunki_version:(NSString*)value;




- (NSObject*)primitiveOriginalPkginfo;
- (void)setPrimitiveOriginalPkginfo:(NSObject*)value;




- (NSObject*)primitivePackageInfoURL;
- (void)setPrimitivePackageInfoURL:(NSObject*)value;




- (NSObject*)primitivePackageURL;
- (void)setPrimitivePackageURL:(NSObject*)value;




- (NSString*)primitiveTitleWithVersion;
- (void)setPrimitiveTitleWithVersion:(NSString*)value;





- (NSMutableSet*)primitiveBlockingApplications;
- (void)setPrimitiveBlockingApplications:(NSMutableSet*)value;



- (NSMutableSet*)primitiveCatalogInfos;
- (void)setPrimitiveCatalogInfos:(NSMutableSet*)value;



- (NSMutableSet*)primitiveCatalogs;
- (void)setPrimitiveCatalogs:(NSMutableSet*)value;



- (NSMutableSet*)primitiveInstallerChoicesItems;
- (void)setPrimitiveInstallerChoicesItems:(NSMutableSet*)value;



- (NSMutableSet*)primitiveInstallsItems;
- (void)setPrimitiveInstallsItems:(NSMutableSet*)value;



- (NSMutableSet*)primitiveItemsToCopy;
- (void)setPrimitiveItemsToCopy:(NSMutableSet*)value;



- (NSMutableSet*)primitivePackageInfos;
- (void)setPrimitivePackageInfos:(NSMutableSet*)value;



- (ApplicationMO*)primitiveParentApplication;
- (void)setPrimitiveParentApplication:(ApplicationMO*)value;



- (NSMutableSet*)primitiveReceipts;
- (void)setPrimitiveReceipts:(NSMutableSet*)value;



- (NSMutableSet*)primitiveReferencingStringObjects;
- (void)setPrimitiveReferencingStringObjects:(NSMutableSet*)value;



- (NSMutableSet*)primitiveRequirements;
- (void)setPrimitiveRequirements:(NSMutableSet*)value;



- (NSMutableSet*)primitiveSupportedArchitectures;
- (void)setPrimitiveSupportedArchitectures:(NSMutableSet*)value;



- (NSMutableSet*)primitiveUpdateFor;
- (void)setPrimitiveUpdateFor:(NSMutableSet*)value;


@end
