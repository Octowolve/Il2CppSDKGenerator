#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRStoryBookVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRStoryBookVolume"));
	}

	template <typename T = uintptr_t> T& StoryType() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& TitleID() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& ContentID() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& m_IsLocalPlayerIn() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T get_IsLocalPlayerIn() {
		return ((T (*)(BRStoryBookVolume*))(Il2CppBase() + 0x260F438))(this);
	}
	template <typename T = void> T set_IsLocalPlayerIn(bool value) {
		return ((T (*)(BRStoryBookVolume*, bool))(Il2CppBase() + 0x260F440))(this, value);
	}
	template <typename T = bool> T IsLocalPawn(uintptr_t other) {
		return ((T (*)(BRStoryBookVolume*, uintptr_t))(Il2CppBase() + 0x260F774))(this, other);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(BRStoryBookVolume*, uintptr_t))(Il2CppBase() + 0x260F8C0))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(BRStoryBookVolume*, uintptr_t))(Il2CppBase() + 0x260F98C))(this, other);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BRStoryBookVolume*))(Il2CppBase() + 0x260FA58))(this);
	}
	template <typename T = void> T SetBtnState(bool isShow) {
		return ((T (*)(BRStoryBookVolume*, bool))(Il2CppBase() + 0x260F448))(this, isShow);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerEnter(uintptr_t P0) {
		return ((T (*)(BRStoryBookVolume*, uintptr_t))(Il2CppBase() + 0x260FB14))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerExit(uintptr_t P0) {
		return ((T (*)(BRStoryBookVolume*, uintptr_t))(Il2CppBase() + 0x260FB1C))(this, P0);
	}

};

}
