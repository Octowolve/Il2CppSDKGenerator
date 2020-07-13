#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class DanceInteractionBtn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "DanceInteractionBtn"));
	}

	template <typename T = uintptr_t> T& BtnComponent() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ActiveSprite() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& InactiveSprite() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_DanceAnimController() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDanceInteraction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetButtonView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDanceAnimationCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(DanceInteractionBtn*))(Il2CppBase() + 0x3D467AC))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(DanceInteractionBtn*))(Il2CppBase() + 0x3D467B4))(this);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(DanceInteractionBtn*))(Il2CppBase() + 0x3D467C4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(DanceInteractionBtn*))(Il2CppBase() + 0x3D467D0))(this);
	}
	template <typename T = void> T OnDanceInteraction() {
		return ((T (*)(DanceInteractionBtn*))(Il2CppBase() + 0x3D46BAC))(this);
	}
	template <typename T = void> T SetButtonView(bool bIsActive) {
		return ((T (*)(DanceInteractionBtn*, bool))(Il2CppBase() + 0x3D46CE8))(this, bIsActive);
	}
	template <typename T = void> T OnDanceAnimationCompleted(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(DanceInteractionBtn*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3D46EC8))(this, args);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(DanceInteractionBtn*))(Il2CppBase() + 0x3D46FCC))(this);
	}

};

}
