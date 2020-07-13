#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class IIPSUpdateCustomData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "IIPSUpdateCustomData"));
	}

	template <typename T = Il2CppString*> T& msg_extend() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& package_size() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& appstore_url() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& downloadJson_url() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& isForceUpdate() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePackageSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T CreateData(Il2CppString* actionMsg) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x33D6A88))(0, actionMsg);
	}
	template <typename T = void> T UpdatePackageSize(float sizeInMB) {
		return ((T (*)(IIPSUpdateCustomData*, float))(Il2CppBase() + 0x33D6FF4))(this, sizeInMB);
	}

};

}
