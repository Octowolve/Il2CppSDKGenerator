#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayMakerGlobals
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "", "PlayMakerGlobals"));
	}

	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& variables() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& events() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> static T& Initialized() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& IsPlayingInEditor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5);
	}
	template <typename T = bool> static T& IsPlaying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6);
	}
	template <typename T = bool> static T& IsEditor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7);
	}
	template <typename T = bool> static T& IsBuilding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> static T get_Initialized() {
		return ((T (*)(void *))(Il2CppBase() + 0x51407FC))(0);
	}
	template <typename T = void> static T set_Initialized(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x5140C50))(0, value);
	}
	template <typename T = bool> static T get_IsPlayingInEditor() {
		return ((T (*)(void *))(Il2CppBase() + 0x5140CD4))(0);
	}
	template <typename T = void> static T set_IsPlayingInEditor(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x5140D54))(0, value);
	}
	template <typename T = bool> static T get_IsPlaying() {
		return ((T (*)(void *))(Il2CppBase() + 0x5140DD8))(0);
	}
	template <typename T = void> static T set_IsPlaying(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x5140E58))(0, value);
	}
	template <typename T = bool> static T get_IsEditor() {
		return ((T (*)(void *))(Il2CppBase() + 0x513D014))(0);
	}
	template <typename T = void> static T set_IsEditor(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x5140EDC))(0, value);
	}
	template <typename T = bool> static T get_IsBuilding() {
		return ((T (*)(void *))(Il2CppBase() + 0x5140F60))(0);
	}
	template <typename T = void> static T set_IsBuilding(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x5140FE0))(0, value);
	}
	template <typename T = void> static T InitApplicationFlags() {
		return ((T (*)(void *))(Il2CppBase() + 0x5141064))(0);
	}
	template <typename T = void> static T Initialize() {
		return ((T (*)(void *))(Il2CppBase() + 0x513CB28))(0);
	}
	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x514126C))(0);
	}
	template <typename T = void> static T ResetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x51412F0))(0);
	}
	template <typename T = uintptr_t> T get_Variables() {
		return ((T (*)(PlayMakerGlobals*))(Il2CppBase() + 0x5141374))(this);
	}
	template <typename T = void> T set_Variables(uintptr_t value) {
		return ((T (*)(PlayMakerGlobals*, uintptr_t))(Il2CppBase() + 0x5141254))(this, value);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T get_Events() {
		return ((T (*)(PlayMakerGlobals*))(Il2CppBase() + 0x514125C))(this);
	}
	template <typename T = void> T set_Events(Il2CppList<Il2CppString*>* value) {
		return ((T (*)(PlayMakerGlobals*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x5141264))(this, value);
	}
	template <typename T = uintptr_t> T AddEvent(Il2CppString* eventName) {
		return ((T (*)(PlayMakerGlobals*, Il2CppString*))(Il2CppBase() + 0x514137C))(this, eventName);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(PlayMakerGlobals*))(Il2CppBase() + 0x51414C4))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(PlayMakerGlobals*))(Il2CppBase() + 0x51414C8))(this);
	}

};

}
