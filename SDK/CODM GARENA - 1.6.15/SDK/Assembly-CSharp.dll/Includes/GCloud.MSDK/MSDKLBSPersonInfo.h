#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKLBSPersonInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKLBSPersonInfo"));
	}

	template <typename T = double> T& distance() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& isFriend() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int64_t> T& timestamp() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix2_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = double> T get_Distance() {
		return ((T (*)(MSDKLBSPersonInfo*))(Il2CppBase() + 0x46CD340))(this);
	}
	template <typename T = void> T set_Distance(double value) {
		return ((T (*)(MSDKLBSPersonInfo*, double))(Il2CppBase() + 0x46CD34C))(this, value);
	}
	template <typename T = int32_t> T get_IsFriend() {
		return ((T (*)(MSDKLBSPersonInfo*))(Il2CppBase() + 0x46CD35C))(this);
	}
	template <typename T = void> T set_IsFriend(int32_t value) {
		return ((T (*)(MSDKLBSPersonInfo*, int32_t))(Il2CppBase() + 0x46CD364))(this, value);
	}
	template <typename T = int64_t> T get_TimeStamp() {
		return ((T (*)(MSDKLBSPersonInfo*))(Il2CppBase() + 0x46CD36C))(this);
	}
	template <typename T = void> T set_TimeStamp(int64_t value) {
		return ((T (*)(MSDKLBSPersonInfo*, int64_t))(Il2CppBase() + 0x46CD374))(this, value);
	}

};

}
