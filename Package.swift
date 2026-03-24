// swift-tools-version:5.9
import PackageDescription

let package = Package(
    name: "CarTrawlerSDK",
    platforms: [
        .iOS(.v13)
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
            url: "https://github.com/cartrawler/cartrawler-ios-sdk/releases/download/16.7.0/CarTrawlerSDK.xcframework.zip",
            checksum: "cd88136ff30aca25bd146e6787db3f781940b1c4b24ea30da82e2fb1fcadaf7f"
        )
    ]
)
