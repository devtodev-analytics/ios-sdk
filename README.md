Latest Version 
--------------
##### _Nov 20st, 2016_ - v1.9.3

Getting Started
---------------
Check out our [official documentation](https://www.devtodev.com/help/3/devtodev_sdk_for_ios_integration/) to learn how to install the sdk on your IDE. You will also learn how to make use of all the features we currently support!

Changelog
---------
See [releases](https://github.com/devtodev-analytics/ios-sdk/releases).

#### Version 1.8.1
Added possibility to generate several progression events within one session
Version 1.8
Added new "Progression event". First of all, the event is used for the games with short (within one game session) locations, game levels. The event allows you to gather data on passing the locations and get statistics on parameters which vary during the the location passing.
#### Version 1.7.1
Improvements of user profile feature.
#### Version 1.7.0
* User profile feature is added. Here you can store properties about a specific user.
 - New methods for managing preset and custom properties of user profile are added.
 - Old methods: age, gender and cheater, are removed. These properties are moved to user profile.
Initial referrer data tracking method is added
#### Version 1.6.7
* Improved compatibility when moving from older sdk versions
* Improved mechanism for calculation of user sessions
#### Version 1.6.6
* The possibility to call events before SDK initialization is added 
#### Version 1.6.5
* Parameter type in Tutorial steps event was changed to NSInteger
#### Version 1.6.4
* Fixing of the special characters encoding in the event parameters
#### Version 1.6.3
* Collecting of user's time zone data (to provide the ability to send push-notifications considering users time) added 
#### Version 1.6.2
* Changed build settings
#### Version 1.6.1
* Improvement of user identification in cross-platform projects
#### Version 1.6
* SDK preparation for usage in cross-platform projects: added methods for user initialization (UserID, ReplaceUserId, SetCurrentLevel).
* Requires Xcode 7 or later to build
* Added Bitcode support
* Other negligeable improvements
#### Version 1.5.5 
* Fixed crash with mutated array while enumerated
#### Version 1.5.4
* Fixed bug with sdk events, were called immediately after init
#### Version 1.5.3
* Blocking of certain events from SDK.
* Improvement of new user calculation method.
#### Version 1.5.2
* The start/finish constants of the tutorial are added to the tutorial steps event.
* Filtering of resending for once committed tutorial steps is made.
* Constants with the names of popular social networks are added to connecting and posting to social networks events.
* Collecting data about "jailbroken" devices.
* Method for getting devtodev SDK integrated version.
* Method for immediate dispatching of events.
#### Version 1.5.1
* Receipt Validation improvement!
#### Version 1.5
* Unified SDK! No more need to use multiple small files, it's enough to integrate one library.
* In-game purchases for several in-game currencies.
* An ability to track currency/resources circulation and balances upon moving to the next level.
* Push Notification for iOS 8.
#### Version 1.4.1
* startSession and endSession methods have been removed. All sessions are counted automatically.
* Timed custom events has been removed
* Minor bug fixed
* All libraries has lib prefix in its names starting from this version
#### Version 1.4
* class Dev2DevStat have been renamed to DevToDev
* prefix 'on' have been removed from method names
* all events are sent to server as packages in order to save traffic
* resume method is renamed into startSession
* suspend method is renamed into endSession
* method currencyAccrual has been removed
#### Version 1.3.3
* You should include the AdSupport if you want to collect IFA info
* Add Custom Event Support
#### Version 1.3.2
* Fixed bug with iOS 5.1
#### Version 1.3.1
* PurchaseName parameter was removed from OnInGamePurchase method
* Add AdSupport.framework dependency
* Ability to use custom UDID was added
* Integration with OpenUDID
* Integration with ODIN UDID
* Bug fixes
