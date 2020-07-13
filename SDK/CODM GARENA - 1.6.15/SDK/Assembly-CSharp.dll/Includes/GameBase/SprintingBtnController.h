#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SprintingBtnController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SprintingBtnController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x44);
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

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SprintingBtnController*))(Il2CppBase() + 0x30A1A38))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SprintingBtnController*))(Il2CppBase() + 0x30A1ADC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SprintingBtnController*))(Il2CppBase() + 0x30A1BE8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SprintingBtnController*))(Il2CppBase() + 0x30A1BF0))(this);
	}

};

}
