#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsChristmasAllInfoControllerEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsChristmasAllInfoController_En"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LiveOpsChristmasAllInfoControllerEn*))(Il2CppBase() + 0x34E0DF0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsChristmasAllInfoControllerEn*))(Il2CppBase() + 0x34E0E94))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(LiveOpsChristmasAllInfoControllerEn*))(Il2CppBase() + 0x34E0FA0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LiveOpsChristmasAllInfoControllerEn*))(Il2CppBase() + 0x34E12BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsChristmasAllInfoControllerEn*))(Il2CppBase() + 0x34E12C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(LiveOpsChristmasAllInfoControllerEn*))(Il2CppBase() + 0x34E12CC))(this);
	}

};

}
