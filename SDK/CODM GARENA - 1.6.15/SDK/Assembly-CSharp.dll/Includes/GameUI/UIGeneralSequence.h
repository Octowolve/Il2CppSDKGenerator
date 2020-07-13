#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIGeneralSequence
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIGeneralSequence"));
	}

	template <typename T = uintptr_t> T& sequenceObj() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& sequenceTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& activeTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& keepActive() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& fTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_bFinish() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& events() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& eventPlay() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& fLastTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAssetsLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayInitEvents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIGeneralSequence*))(Il2CppBase() + 0x3AE80E0))(this);
	}
	template <typename T = void> T OnAssetsLoaded() {
		return ((T (*)(UIGeneralSequence*))(Il2CppBase() + 0x3AE879C))(this);
	}
	template <typename T = void> T PlayInitEvents() {
		return ((T (*)(UIGeneralSequence*))(Il2CppBase() + 0x3AE8184))(this);
	}
	template <typename T = void> T Play() {
		return ((T (*)(UIGeneralSequence*))(Il2CppBase() + 0x3AE8840))(this);
	}
	template <typename T = bool> T get_bFinish() {
		return ((T (*)(UIGeneralSequence*))(Il2CppBase() + 0x3AE8938))(this);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(UIGeneralSequence*))(Il2CppBase() + 0x3AE8940))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIGeneralSequence*))(Il2CppBase() + 0x3AE8A34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnAssetsLoaded() {
		return ((T (*)(UIGeneralSequence*))(Il2CppBase() + 0x3AE94D4))(this);
	}

};

}
