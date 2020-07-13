#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BagPanelView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BagPanelView"));
	}

	template <typename T = uintptr_t> T& BagContainer() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& BGSprite() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& CountDownLabel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& m_RemainingSeconds() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& m_TimeOut() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = int32_t> T get_TimeOut() {
		return ((T (*)(BagPanelView*))(Il2CppBase() + 0x37132B4))(this);
	}
	template <typename T = void> T set_TimeOut(int32_t value) {
		return ((T (*)(BagPanelView*, int32_t))(Il2CppBase() + 0x37132BC))(this, value);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BagPanelView*))(Il2CppBase() + 0x37132C4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BagPanelView*))(Il2CppBase() + 0x3713400))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(BagPanelView*))(Il2CppBase() + 0x37134A8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BagPanelView*))(Il2CppBase() + 0x371358C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BagPanelView*))(Il2CppBase() + 0x371363C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(BagPanelView*))(Il2CppBase() + 0x3713644))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(BagPanelView*))(Il2CppBase() + 0x371364C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(BagPanelView*))(Il2CppBase() + 0x3713654))(this);
	}

};

}
