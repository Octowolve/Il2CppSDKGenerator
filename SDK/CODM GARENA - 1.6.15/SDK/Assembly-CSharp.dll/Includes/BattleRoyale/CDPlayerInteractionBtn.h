#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class CDPlayerInteractionBtn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "CDPlayerInteractionBtn"));
	}

	template <typename T = uintptr_t> T& BtnComponent() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& BtnSprite() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& bIsCDPlaying() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& AngularSpeed() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInteraction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RotateAlbumCover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBtnDisplayState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(CDPlayerInteractionBtn*))(Il2CppBase() + 0x3D3ED5C))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(CDPlayerInteractionBtn*))(Il2CppBase() + 0x3D3ED64))(this);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(CDPlayerInteractionBtn*))(Il2CppBase() + 0x3D3ED74))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CDPlayerInteractionBtn*))(Il2CppBase() + 0x3D3ED80))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(CDPlayerInteractionBtn*))(Il2CppBase() + 0x3D3EEEC))(this);
	}
	template <typename T = void> T OnInteraction() {
		return ((T (*)(CDPlayerInteractionBtn*))(Il2CppBase() + 0x3D3EEF4))(this);
	}
	template <typename T = void> T RotateAlbumCover(float dt) {
		return ((T (*)(CDPlayerInteractionBtn*, float))(Il2CppBase() + 0x3D3F148))(this, dt);
	}
	template <typename T = bool> T IsEnabled() {
		return ((T (*)(CDPlayerInteractionBtn*))(Il2CppBase() + 0x3D3F30C))(this);
	}
	template <typename T = void> T RefreshBtnDisplayState() {
		return ((T (*)(CDPlayerInteractionBtn*))(Il2CppBase() + 0x3D3F3FC))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(CDPlayerInteractionBtn*, float))(Il2CppBase() + 0x3D3F670))(this, dt);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CDPlayerInteractionBtn*))(Il2CppBase() + 0x3D3F738))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(CDPlayerInteractionBtn*, float))(Il2CppBase() + 0x3D3F740))(this, P0);
	}

};

}
