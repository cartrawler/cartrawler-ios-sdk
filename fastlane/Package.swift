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
            checksum: "732183dd7a990d53c9a0d0907dd26cfccfbef398f582509373fd11630e512ba4"
        )
    ]
)
