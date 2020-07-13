#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class TacticalRadarCompDogTag
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "TacticalRadarComp_DogTag"));
	}

	template <typename T = uintptr_t> T& DogTagIcon() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& DogTagIconList() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppString*> T& RedIcon() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& BlueIcon() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSpriteInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowOnClipPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCampIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T CreateSpriteInstance() {
		return ((T (*)(TacticalRadarCompDogTag*))(Il2CppBase() + 0x29AC810))(this);
	}
	template <typename T = bool> T ShowOnClipPanel() {
		return ((T (*)(TacticalRadarCompDogTag*))(Il2CppBase() + 0x29ACA40))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(TacticalRadarCompDogTag*))(Il2CppBase() + 0x29ACAE0))(this);
	}
	template <typename T = void> T SetCampIcon(uintptr_t dtItem, uintptr_t dtDropItem) {
		return ((T (*)(TacticalRadarCompDogTag*, uintptr_t, uintptr_t))(Il2CppBase() + 0x29ACC40))(this, dtItem, dtDropItem);
	}
	template <typename T = void> T TickInfo() {
		return ((T (*)(TacticalRadarCompDogTag*))(Il2CppBase() + 0x29ACDF0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ShowOnClipPanel() {
		return ((T (*)(TacticalRadarCompDogTag*))(Il2CppBase() + 0x29AD558))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(TacticalRadarCompDogTag*))(Il2CppBase() + 0x29AD560))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickInfo() {
		return ((T (*)(TacticalRadarCompDogTag*))(Il2CppBase() + 0x29AD568))(this);
	}

};

}
