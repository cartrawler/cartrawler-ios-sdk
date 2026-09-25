// swift-tools-version:5.9
import PackageDescription

let package = Package(
    name: "CarTrawlerSDK",
    platforms: [
        .iOS(.v15)
    ],
    products: [
        .library(
            name: "CarTrawlerSDK",
            targets: ["CarTrawlerSDK"]
        )
    ],
    targets: [
        .binaryTarget(
            name: "CarTrawlerSDK",
            url: "https://github.com/cartrawler/cartrawler-ios-sdk/releases/download/16.13.0/CarTrawlerSDK.xcframework.zip",
            checksum: "96b044d9cc315f56fd0cfdfa76d182f91604bcc6a57b8e9deec4202e7f552afc"
        )
    ]
)
