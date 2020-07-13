#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class GameQuitMessageBoxController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "GameQuitMessageBoxController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfBlurWhenOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GameQuitMessageBoxController*))(Il2CppBase() + 0x22DB1FC))(this);
	}
	template <typename T = bool> T IfBlurWhenOpen() {
		return ((T (*)(GameQuitMessageBoxController*))(Il2CppBase() + 0x22DB2A0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GameQuitMessageBoxController*))(Il2CppBase() + 0x22DB340))(this);
	}
	template <typename T = void> T OnClickCallBack(uintptr_t result) {
		return ((T (*)(GameQuitMessageBoxController*, uintptr_t))(Il2CppBase() + 0x22DB764))(this, result);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GameQuitMessageBoxController*))(Il2CppBase() + 0x22DB938))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfBlurWhenOpen() {
		return ((T (*)(GameQuitMessageBoxController*))(Il2CppBase() + 0x22DB940))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GameQuitMessageBoxController*))(Il2CppBase() + 0x22DB948))(this);
	}

};

}
