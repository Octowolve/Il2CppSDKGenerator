#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class InteractiveInGameManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "InteractiveInGameManager"));
	}

	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& interactiveComparer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& InteractiveDataList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddInteractiveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveInteractiveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetInteractiveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentShowType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddGameHudState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveGameHudState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x343F1CC))(0);
	}
	template <typename T = void> T AddInteractiveData(uintptr_t t, int32_t v) {
		return ((T (*)(InteractiveInGameManager*, uintptr_t, int32_t))(Il2CppBase() + 0x343F2E0))(this, t, v);
	}
	template <typename T = void> T RemoveInteractiveData(uintptr_t t) {
		return ((T (*)(InteractiveInGameManager*, uintptr_t))(Il2CppBase() + 0x343F53C))(this, t);
	}
	template <typename T = void> T ResetInteractiveData() {
		return ((T (*)(InteractiveInGameManager*))(Il2CppBase() + 0x3483BEC))(this);
	}
	template <typename T = uintptr_t> T GetCurrentShowType() {
		return ((T (*)(InteractiveInGameManager*))(Il2CppBase() + 0x34830EC))(this);
	}
	template <typename T = void> T AddGameHudState(uintptr_t type) {
		return ((T (*)(InteractiveInGameManager*, uintptr_t))(Il2CppBase() + 0x3483D24))(this, type);
	}
	template <typename T = void> T RemoveGameHudState(uintptr_t type) {
		return ((T (*)(InteractiveInGameManager*, uintptr_t))(Il2CppBase() + 0x3483E90))(this, type);
	}

};

}
