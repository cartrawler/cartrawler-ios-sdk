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
            url: "https://github.com/cartrawler/cartrawler-ios-sdk/releases/download/16.7.1/CarTrawlerSDK.xcframework.zip",
            checksum: "ddbcebb60f98701543f8b3bd99eff1d95572d575b95fb225cb0d104d7c7e1d39"
        )
    ]
)
