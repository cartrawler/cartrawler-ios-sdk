
Pod::Spec.new do |s|

s.name         = "CarTrawlerSDK"
s.version      = "11.9.0"
s.summary      = "Cartrawler iOS SDK"
s.description  = <<-DESC
A toolkit for car rental & ground transport
DESC

s.homepage     = "http://cartrawler.com"

s.license      = {
:type => 'Commercial',
:text => <<-LICENSE
Copyright (C) 2016 Cartrawler
LICENSE
}

s.author             = { "Cartrawler" => "" }
s.platform     = :ios
s.platform     = :ios, "10.0"
s.source       = { :git => "https://github.com/cartrawler/cartrawler-ios-sdk.git", :tag => "#{s.version}" }

s.ios.vendored_frameworks = 'CarTrawlerSDK.framework'
s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

s.requires_arc = true
s.dependency 'CTPayment', '1.0.29'
s.dependency 'SnowplowTracker', '~> 2.2.0'
s.preserve_path = '**/*.bcsymbolmap'

end
