#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartAssetRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartAssetRequest"));
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
		return ((T (*)(StartAssetRequest*))(Il2CppBase() + 0x493E200))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Excute() {
		return ((T (*)(StartAssetRequest*))(Il2CppBase() + 0x493E3BC))(this);
	}

};

}
