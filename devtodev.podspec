Pod::Spec.new do |s|
  s.name         = "devtodev"
  s.version      = "1.14"
  s.summary      = "devtodev for iOS"
  s.description  = <<-DESC
  devtodev is a powerful analytical and marketing platform for mobile and web applications. Gather all the data of your application in one simple interface and analyze every bite of it. With devtodev, it is easy to find the weak points, to improve traffic source efficiency and to build strong communications with the customers.
                   DESC

  s.homepage     = "https://devtodev.com/"
  s.license      = "Apache License, Version 2.0"
  s.author       = { "devtodev" => "info@devtodev.com" }
  s.source       = { 
    :git => "https://github.com/devtodev-analytics/ios-sdk.git", 
    :branch => "master", 
    :tag => "v" + s.version.to_s 
  }
  s.default_subspec = 'devtodev'

  s.subspec 'devtodev' do |sub|
    sub.ios.vendored_frameworks = "devtodev-ios " + s.version.to_s + "/devtodev.framework"
#    sub.vendored_frameworks = "devtodev-ios " + s.version.to_s + "/devtodev.framework"
    sub.frameworks = "Security", "UIKit", "UserNotifications", "AdSupport"
    sub.library   = "z"
    sub.ios.deployment_target = "7.0"
  end

  s.subspec 'AppExtension' do |sub|
    sub.ios.vendored_frameworks = "devtodev-ios " + s.version.to_s + "/devtodevAppExtensions.framework"
#    sub.vendored_frameworks = "devtodev-ios " + s.version.to_s + "/devtodevAppExtensions.framework"
    sub.frameworks = "UserNotifications"
    sub.ios.deployment_target = "10.0"
  end

end
