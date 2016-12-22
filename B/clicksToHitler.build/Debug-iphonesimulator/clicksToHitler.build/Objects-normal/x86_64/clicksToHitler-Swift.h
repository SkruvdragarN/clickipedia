// Generated by Apple Swift version 3.0.2 (swiftlang-800.0.63 clang-800.0.42.1)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import GameKit;
@import GoogleMobileAds;
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIWindow;
@class UIApplication;

SWIFT_CLASS("_TtC14clicksToHitler11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * _Nullable window;
- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions;
- (void)applicationWillResignActive:(UIApplication * _Nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * _Nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * _Nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * _Nonnull)application;
- (void)applicationWillTerminate:(UIApplication * _Nonnull)application;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class GADInterstitial;
@class UIAlertController;
@class UIWebView;
@class GKGameCenterViewController;
@class UIActivityIndicatorView;
@class UIBarButtonItem;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC14clicksToHitler20ClicksViewController")
@interface ClicksViewController : UIViewController <GKGameCenterControllerDelegate, GADInterstitialDelegate, GADAdDelegate, UIWebViewDelegate>
@property (nonatomic, strong) GADInterstitial * _Null_unspecified interstitial;
@property (nonatomic, strong) UIAlertController * _Nonnull hitlerGratzPopup;
@property (nonatomic, weak) IBOutlet UIActivityIndicatorView * _Null_unspecified loadingIndicator;
@property (nonatomic) BOOL hitlerFound;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull siteTrace;
@property (nonatomic, copy) NSDate * _Nonnull startDate;
@property (nonatomic) BOOL timeTicking;
@property (nonatomic) BOOL showingAd;
@property (nonatomic) BOOL siteReady;
@property (nonatomic, weak) IBOutlet UIWebView * _Null_unspecified web;
@property (nonatomic, weak) IBOutlet UIBarButtonItem * _Null_unspecified clicksLabel;
- (void)viewDidAppear:(BOOL)animated;
- (IBAction)resetButton:(id _Nonnull)sender;
@property (nonatomic) NSInteger clicks;
- (void)checkInternet;
- (void)viewDidLoad;
- (GADInterstitial * _Nonnull)createAndLoadInterstitial;
- (void)interstitialDidDismissScreen:(GADInterstitial * _Nonnull)ad;
- (void)showAd;
- (void)updateTimeLabel;
- (void)removeLoadingInd;
- (BOOL)webView:(UIWebView * _Nonnull)webView shouldStartLoadWithRequest:(NSURLRequest * _Nonnull)request navigationType:(UIWebViewNavigationType)navigationType;
- (void)webViewDidFinishLoad:(UIWebView * _Nonnull)webView;
- (void)didReceiveMemoryWarning;
- (NSString * _Nonnull)parseStringFromLinkWithOldLink:(NSString * _Nonnull)oldLink;
- (void)addTotalClicksToLocalSaveWithClicks:(NSInteger)clicks;
- (void)addTotalHitlerFound;
- (void)updateBestTimeWithTime:(double)time;
- (void)updateAverageWithClicks:(NSInteger)clicks;
- (void)checkLeastClicksWithClicks:(NSInteger)clicks;
- (void)saveLeastClicksToLeaderboardsWithClicks:(NSInteger)clicks;
- (void)saveAverageToLeaderboardsWithAverage:(double)average;
- (void)saveBestTimeToLeaderboardsWithTime:(double)time;
- (void)saveFoundsLeaderboardWithFounds:(NSInteger)founds;
- (void)authPlayer;
- (void)gameCenterViewControllerDidFinish:(GKGameCenterViewController * _Nonnull)gameCenterViewController;
+ (NSString * _Nonnull)getTimeStringWithTime:(double)time;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface NSObject (SWIFT_EXTENSION(clicksToHitler))
@end

@class UIImageView;
@class UILabel;

SWIFT_CLASS("_TtC14clicksToHitler19StartViewController")
@interface StartViewController : UIViewController <GKGameCenterControllerDelegate>
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified hitlerStart;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified startText;
@property (nonatomic) double animateAngle;
@property (nonatomic) double animateSpeed;
@property (nonatomic) BOOL loggedIn;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewDidLoad;
- (void)checkInternet;
- (void)rotateHitlerPlus;
- (void)rotateHitlerMinus;
- (void)didReceiveMemoryWarning;
+ (void)downloadLatestWorldStats;
- (IBAction)gameCenterButton:(id _Nonnull)sender;
- (IBAction)startButtonPushed:(id _Nonnull)sender;
- (IBAction)invisButton:(id _Nonnull)sender;
- (void)authPlayer;
- (void)resetLocalSave;
- (void)showLeaderBoard;
- (void)gameCenterViewControllerDidFinish:(GKGameCenterViewController * _Nonnull)gameCenterViewController;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITableView;
@class UITableViewCell;
@class UIView;

SWIFT_CLASS("_TtC14clicksToHitler19StatsViewController")
@interface StatsViewController : UITableViewController
- (void)viewDidAppear:(BOOL)animated;
- (void)viewDidLoad;
- (void)populateTable;
- (void)loadWorldstats;
- (void)reloadTableView:(UITableView * _Nonnull)tableView;
- (void)loadUserStats;
- (void)loadTotalClicks;
- (void)loadTotalHitlerFounds;
- (void)loadLeastClicks;
- (void)loadAverageClicks;
- (void)loadBestTime;
- (void)didReceiveMemoryWarning;
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (NSString * _Nullable)tableView:(UITableView * _Nonnull)tableView titleForHeaderInSection:(NSInteger)section;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (UITableViewCell * _Nonnull)configCellWithCell:(UITableViewCell * _Nonnull)cell row:(NSInteger)row section:(NSInteger)section;
- (void)tableView:(UITableView * _Nonnull)tableView willDisplayHeaderView:(UIView * _Nonnull)view forSection:(NSInteger)section;
- (void)checkInternet;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop
