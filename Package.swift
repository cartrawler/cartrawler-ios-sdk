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
            url: "https://github.com/cartrawler/cartrawler-ios-sdk/releases/download/16.11.1/CarTrawlerSDK.xcframework.zip",
            checksum: "440b0f4ccb0fb41c1584dfaec6deb217f0b6ef15cd7a547e6255bdeb77193911"
        )
    ]
)
