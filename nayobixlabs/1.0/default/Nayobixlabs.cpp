#include "Nayobixlabs.h"

namespace android {
namespace hardware {
namespace nayobixlabs {
namespace V1_0 {
namespace implementation {

// Methods from ::android::hardware::nayobixlabs::V1_0::INayobixlabs follow.
Return<void> Nayobixlabs::read(uint32_t size, read_cb _hidl_cb) {
    // TODO implement
    return Void();
}

Return<::android::hardware::nayobixlabs::V1_0::Result> Nayobixlabs::write(const hidl_string& buffer) {
    // TODO implement
    return ::android::hardware::nayobixlabs::V1_0::Result {};
}

Return<int32_t> Nayobixlabs::test(int32_t valueIn) {
    // TODO implement
    return int32_t {};
}


// Methods from ::android::hidl::base::V1_0::IBase follow.

//INayobixlabs* HIDL_FETCH_INayobixlabs(const char* /* name */) {
    //return new Nayobixlabs();
//}
//
}  // namespace implementation
}  // namespace V1_0
}  // namespace nayobixlabs
}  // namespace hardware
}  // namespace android
