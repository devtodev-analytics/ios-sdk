Latest Version 
--------------
##### _Nov 20st, 2016_ - v1.9.3

Getting Started
---------------
Full description of the integration process of devtodev SDK and all the accessible features can be found on the page with [official devtodev documentation](https://www.devtodev.com/help/4).

Changelog
---------
See [releases](https://github.com/devtodev-analytics/ios-sdk/releases).

#### Version 1.9.3
*	iOS 7 push compatibility
*	Unused data removed from events

#### Version 1.9.1-1.9.2
*	Decreased size of framework
*	Disabled clang modules
*	Removed deprecated anticheat methods
*	Some minor fixes

#### Version 1.9
*	iOs 10 support 
*	Added the ability to attach media files into the push notification
*	Added interactivity to push-notifications: buttons, sharing, URLs, deeplinks, sound control.
*	Framework distribution

#### Version 1.8.1
Added possibility to generate several progression events within one session

#### Version 1.8
* Added new "Progression event". First of all, the event is used for the games with short (within one game session) locations, game levels. The event allows you to gather data on passing the locations and get statistics on parameters which vary during the the location passing.

#### Version 1.7.1
* Improvements of user profile feature.

#### Version 1.7.0
* User profile feature is added. Here you can store properties about a specific user.
 - New methods for managing preset and custom properties of user profile are added.
 - Old methods: age, gender and cheater, are removed. These properties are moved to user profile.
* Initial referrer data tracking method is added

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
