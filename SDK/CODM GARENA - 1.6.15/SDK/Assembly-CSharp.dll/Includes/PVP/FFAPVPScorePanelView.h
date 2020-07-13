#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class FFAPVPScorePanelView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "FFAPVPScorePanelView"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& scoreDescLable() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& deathDescLable() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& buttonMask() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& gridTop3() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& gridOthers() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& templateItemSmaller() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& templateItemBigger() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& gridList() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& isInit() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> static T& TOP_3_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& OTHER_5_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MAX_SHOW_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitGrids() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCampStats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(FFAPVPScorePanelView*))(Il2CppBase() + 0x347B168))(this);
	}
	template <typename T = void> T InitGrids() {
		return ((T (*)(FFAPVPScorePanelView*))(Il2CppBase() + 0x347B218))(this);
	}
	template <typename T = void> T SetCampStats(Il2CppList<uintptr_t>* psList) {
		return ((T (*)(FFAPVPScorePanelView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x347B4FC))(this, psList);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(FFAPVPScorePanelView*))(Il2CppBase() + 0x347B8C8))(this);
	}

};

}
