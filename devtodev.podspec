Pod::Spec.new do |s|
  s.name         = "devtodev"
  s.version      = "1.14.7"
  s.summary      = "devtodev for iOS"
  s.description  = <<-DESC
  devtodev is a powerful analytical and marketing platform for mobile and web applications. Gather all the data of your application in one simple interface and analyze every bite of it. With devtodev, it is easy to find the weak points, to improve traffic source efficiency and to build strong communications with the customers.
                   DESC

  s.homepage     = "https://devtodev.com/"
  s.license      = { :type => 'Apache License, Version 2.0', :text => <<-LICENSE
    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
    LICENSE
  }
  s.author       = { "devtodev" => "info@devtodev.com" }
  s.source       = {
    :git => "https://github.com/devtodev-analytics/ios-sdk.git",
    :branch => "master",
    :tag => "v" + s.version.to_s
  }
  s.default_subspec = 'devtodev'

  s.subspec 'devtodev' do |sub|
    sub.ios.vendored_frameworks = "devtodev-ios " + s.version.to_s + "/devtodev.framework"
    sub.frameworks = "Security", "UIKit", "UserNotifications", "AdSupport"
    sub.library   = "z"
    sub.ios.deployment_target = "9.0"
  end

  s.subspec 'AppExtension' do |sub|
    sub.ios.vendored_frameworks = "devtodev-ios " + s.version.to_s + "/devtodevAppExtensions.framework"
    sub.frameworks = "UserNotifications"
    sub.ios.deployment_target = "10.0"
  end

end
