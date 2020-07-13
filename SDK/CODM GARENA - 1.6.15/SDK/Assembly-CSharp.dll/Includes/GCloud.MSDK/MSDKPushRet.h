#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKPushRet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKPushRet"));
	}

	template <typename T = int32_t> T& type() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& notification() {
		return *(T*)((uintptr_t)this + 0x24);
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

	template <typename T = int32_t> T get_Type() {
		return ((T (*)(MSDKPushRet*))(Il2CppBase() + 0x46DC2CC))(this);
	}
	template <typename T = void> T set_Type(int32_t value) {
		return ((T (*)(MSDKPushRet*, int32_t))(Il2CppBase() + 0x46DC2D4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Notification() {
		return ((T (*)(MSDKPushRet*))(Il2CppBase() + 0x46DC2DC))(this);
	}
	template <typename T = void> T set_Notification(Il2CppString* value) {
		return ((T (*)(MSDKPushRet*, Il2CppString*))(Il2CppBase() + 0x46DC2E4))(this, value);
	}

};

}
