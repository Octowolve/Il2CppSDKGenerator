#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ADSBtnController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ADSBtnController"));
	}

	template <typename T = uintptr_t> T& m_ADSBtnView() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init() {
		return ((T (*)(ADSBtnController*))(Il2CppBase() + 0x3B66214))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ADSBtnController*))(Il2CppBase() + 0x3B66320))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ADSBtnController*))(Il2CppBase() + 0x3B663C4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ADSBtnController*))(Il2CppBase() + 0x3B663CC))(this);
	}

};

}
