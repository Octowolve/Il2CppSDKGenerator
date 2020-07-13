#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class PVPAvatarModelComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "PVPAvatarModelComponent"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateAvatarObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyOldAvatarModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(PVPAvatarModelComponent*))(Il2CppBase() + 0x2ADA2C4))(this);
	}
	template <typename T = uintptr_t> T CreateAvatarObject(int32_t assetID) {
		return ((T (*)(PVPAvatarModelComponent*, int32_t))(Il2CppBase() + 0x2ADA3A4))(this, assetID);
	}
	template <typename T = void> T DestroyOldAvatarModel() {
		return ((T (*)(PVPAvatarModelComponent*))(Il2CppBase() + 0x2ADA584))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(PVPAvatarModelComponent*))(Il2CppBase() + 0x2ADA7A0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CreateAvatarObject(int32_t P0) {
		return ((T (*)(PVPAvatarModelComponent*, int32_t))(Il2CppBase() + 0x2ADA7A8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyOldAvatarModel() {
		return ((T (*)(PVPAvatarModelComponent*))(Il2CppBase() + 0x2ADA7B0))(this);
	}

};

}
