import XCTest
@testable import SASL

class SASLTests: XCTestCase {
    func testExample() {
        let r = sasl_client_init(nil)
        sasl_done()
        XCTAssertEqual(r, 0)
    }


    static var allTests : [(String, (SASLTests) -> () throws -> Void)] {
        return [
            ("testExample", testExample),
        ]
    }
}
