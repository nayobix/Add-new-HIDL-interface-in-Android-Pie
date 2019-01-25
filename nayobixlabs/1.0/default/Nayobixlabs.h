#ifndef ANDROID_HARDWARE_NAYOBIXLABS_V1_0_NAYOBIXLABS_H
#define ANDROID_HARDWARE_NAYOBIXLABS_V1_0_NAYOBIXLABS_H

#include <android/hardware/nayobixlabs/1.0/INayobixlabs.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>

namespace android {
namespace hardware {
namespace nayobixlabs {
namespace V1_0 {
namespace implementation {

using ::android::hardware::hidl_array;
using ::android::hardware::hidl_memory;
using ::android::hardware::hidl_string;
using ::android::hardware::hidl_vec;
using ::android::hardware::Return;
using ::android::hardware::Void;
using ::android::sp;

struct Nayobixlabs : public INayobixlabs {
    // Methods from ::android::hardware::nayobixlabs::V1_0::INayobixlabs follow.
    Return<void> read(uint32_t size, read_cb _hidl_cb) override;
    Return<::android::hardware::nayobixlabs::V1_0::Result> write(const hidl_string& buffer) override;
    Return<int32_t> test(int32_t valueIn) override;

    // Methods from ::android::hidl::base::V1_0::IBase follow.

};

// FIXME: most likely delete, this is only for passthrough implementations
// extern "C" INayobixlabs* HIDL_FETCH_INayobixlabs(const char* name);

}  // namespace implementation
}  // namespace V1_0
}  // namespace nayobixlabs
}  // namespace hardware
}  // namespace android

#endif  // ANDROID_HARDWARE_NAYOBIXLABS_V1_0_NAYOBIXLABS_H
