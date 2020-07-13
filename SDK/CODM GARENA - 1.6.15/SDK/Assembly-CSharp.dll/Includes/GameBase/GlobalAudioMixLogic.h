#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GlobalAudioMixLogic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GlobalAudioMixLogic"));
	}

	template <typename T = Il2CppString*> static T& CurUISwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& mCurUI() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFrontEndPushUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFrontEndPopUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFrontEndInited() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFrontEndShutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T RegisterEventHandler() {
		return ((T (*)(GlobalAudioMixLogic*))(Il2CppBase() + 0x1ECA484))(this);
	}
	template <typename T = void> T UnregisterEventHandler() {
		return ((T (*)(GlobalAudioMixLogic*))(Il2CppBase() + 0x1ECA6E8))(this);
	}
	template <typename T = void> T OnEnterGame(uintptr_t Msg) {
		return ((T (*)(GlobalAudioMixLogic*, uintptr_t))(Il2CppBase() + 0x1ECA820))(this, Msg);
	}
	template <typename T = void> T OnFrontEndPushUI(uintptr_t Msg) {
		return ((T (*)(GlobalAudioMixLogic*, uintptr_t))(Il2CppBase() + 0x1ECA8C0))(this, Msg);
	}
	template <typename T = void> T OnFrontEndPopUI(uintptr_t Msg) {
		return ((T (*)(GlobalAudioMixLogic*, uintptr_t))(Il2CppBase() + 0x1ECAB80))(this, Msg);
	}
	template <typename T = void> T OnFrontEndInited(uintptr_t Msg) {
		return ((T (*)(GlobalAudioMixLogic*, uintptr_t))(Il2CppBase() + 0x1ECAC20))(this, Msg);
	}
	template <typename T = void> T OnFrontEndShutdown(uintptr_t Msg) {
		return ((T (*)(GlobalAudioMixLogic*, uintptr_t))(Il2CppBase() + 0x1ECACC0))(this, Msg);
	}

};

}
