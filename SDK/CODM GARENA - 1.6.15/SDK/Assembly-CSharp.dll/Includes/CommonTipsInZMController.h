#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CommonTipsInZMController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CommonTipsInZMController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CommonTipsInZMController*))(Il2CppBase() + 0x2D3A8D0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CommonTipsInZMController*))(Il2CppBase() + 0x2D3A974))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CommonTipsInZMController*))(Il2CppBase() + 0x2D3AA9C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CommonTipsInZMController*))(Il2CppBase() + 0x2D3AB58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CommonTipsInZMController*))(Il2CppBase() + 0x2D3AB60))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CommonTipsInZMController*))(Il2CppBase() + 0x2D3AB68))(this);
	}

};

}
