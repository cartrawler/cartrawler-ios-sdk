
Pod::Spec.new do |s|

s.name         = "CarTrawlerSDK"
s.version      = "6.9.0"
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
s.platform     = :ios, "9.0"
s.source       = { :git => "https://github.com/cartrawler/cartrawler-ios-sdk.git", :tag => "#{s.version}" }

s.ios.vendored_frameworks = 'CarTrawlerSDK.framework'

s.requires_arc = true
s.dependency 'CTPayment'

end
