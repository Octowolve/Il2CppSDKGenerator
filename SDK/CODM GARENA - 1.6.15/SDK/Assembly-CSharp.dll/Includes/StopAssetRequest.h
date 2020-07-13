#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StopAssetRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StopAssetRequest"));
	}

	template <typename T = int32_t> T& assetID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& callback() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Excute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Excute() {
		return ((T (*)(StopAssetRequest*))(Il2CppBase() + 0x493E7C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Excute() {
		return ((T (*)(StopAssetRequest*))(Il2CppBase() + 0x493E8D8))(this);
	}

};

}
