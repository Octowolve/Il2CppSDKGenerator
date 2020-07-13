#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SceneGuiManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SceneGuiManager"));
	}

	template <typename T = Il2CppString*> static T& GUIROOT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mSceneGuiList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mGuiRootObj() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSceneGui() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveSceneGui() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_GuiRootObj() {
		return ((T (*)(SceneGuiManager*))(Il2CppBase() + 0x2DF6E6C))(this);
	}
	template <typename T = void> T OnStartMatch() {
		return ((T (*)(SceneGuiManager*))(Il2CppBase() + 0x2DF6E74))(this);
	}
	template <typename T = void> T OnEndMatch() {
		return ((T (*)(SceneGuiManager*))(Il2CppBase() + 0x2DF71F8))(this);
	}
	template <typename T = void> T AddSceneGui(uintptr_t ui) {
		return ((T (*)(SceneGuiManager*, uintptr_t))(Il2CppBase() + 0x2DF6B18))(this, ui);
	}
	template <typename T = void> T RemoveSceneGui(uintptr_t ui) {
		return ((T (*)(SceneGuiManager*, uintptr_t))(Il2CppBase() + 0x2DF6428))(this, ui);
	}
	template <typename T = void> T xLuaBaseProxy_OnStartMatch() {
		return ((T (*)(SceneGuiManager*))(Il2CppBase() + 0x2DF7340))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEndMatch() {
		return ((T (*)(SceneGuiManager*))(Il2CppBase() + 0x2DF7348))(this);
	}

};

}
