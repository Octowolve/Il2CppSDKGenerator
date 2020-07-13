#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKToolsFreeFlowRet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKToolsFreeFlowRet"));
	}

	template <typename T = uintptr_t> T& freeFlowInfo() {
		return *(T*)((uintptr_t)this + 0x20);
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

	template <typename T = uintptr_t> T get_FreeFlowInfo() {
		return ((T (*)(MSDKToolsFreeFlowRet*))(Il2CppBase() + 0x46E0460))(this);
	}
	template <typename T = void> T set_FreeFlowInfo(uintptr_t value) {
		return ((T (*)(MSDKToolsFreeFlowRet*, uintptr_t))(Il2CppBase() + 0x46E0468))(this, value);
	}

};

}
