
Pod::Spec.new do |s|

s.name         = "CarTrawlerGenericSDK"
s.version      = "FRAMEWORK_VERSION"
s.summary      = "The Cartrawler SDK"
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
s.platform     = :ios, "8.0"
s.source       = { :git => "https://github.com/cartrawler/cartrawler-ios-build.git", :tag => "TAG_NAME" }

s.ios.vendored_frameworks = 'CarTrawlerSDK.framework'

s.requires_arc = true

end
