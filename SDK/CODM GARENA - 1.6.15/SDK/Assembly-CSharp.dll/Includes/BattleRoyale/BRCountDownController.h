#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRCountDownController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRCountDownController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRCountDownChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRCountDownController*))(Il2CppBase() + 0x251230C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRCountDownController*))(Il2CppBase() + 0x25123B0))(this);
	}
	template <typename T = void> T OnBRCountDownChanged(int32_t count) {
		return ((T (*)(BRCountDownController*, int32_t))(Il2CppBase() + 0x25124B0))(this, count);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRCountDownController*))(Il2CppBase() + 0x2512704))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRCountDownController*))(Il2CppBase() + 0x251270C))(this);
	}

};

}
