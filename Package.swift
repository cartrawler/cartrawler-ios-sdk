// swift-tools-version:5.9
import PackageDescription

let package = Package(
    name: "CarTrawlerSDK",
    platforms: [
        .iOS(.v11)
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
            url: "https://github.com/cartrawler/cartrawler-ios-sdk/releases/download/16.6.0/CarTrawlerSDK.xcframework.zip",
            checksum: "aaef45d7bfcf45233acb6f83f07f1b3a0b262f9e6b0e32c3a90d423571614357"
        )
    ]
)
