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
            url: "https://github.com/cartrawler/cartrawler-ios-sdk/releases/download/16.7.2/CarTrawlerSDK.xcframework.zip",
            checksum: "dc3d921cf990d73d05ad625093f9bd4e9451a040953ea3e113b8d585b34450de"
        )
    ]
)
