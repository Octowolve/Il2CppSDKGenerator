#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PVPDroppedPickUpGuide
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PVPDroppedPickUpGuide"));
	}

	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& Quality() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& mDroppedPickUp() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& MinDis() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& MaxDis() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& MaxScale() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& MinScale() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& DurationTime() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& CountTime() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PVPDroppedPickUpGuide*))(Il2CppBase() + 0x3D9F638))(this);
	}
	template <typename T = float> T GetScale(float dis) {
		return ((T (*)(PVPDroppedPickUpGuide*, float))(Il2CppBase() + 0x3D9F6E0))(this, dis);
	}
	template <typename T = void> T SetItem(int32_t itemID) {
		return ((T (*)(PVPDroppedPickUpGuide*, int32_t))(Il2CppBase() + 0x3D9F830))(this, itemID);
	}
	template <typename T = void> T Init(uintptr_t pickUp, int32_t ItemID) {
		return ((T (*)(PVPDroppedPickUpGuide*, uintptr_t, int32_t))(Il2CppBase() + 0x3D9FAD8))(this, pickUp, ItemID);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PVPDroppedPickUpGuide*))(Il2CppBase() + 0x3D9FBB8))(this);
	}
	template <typename T = void> T UpdateScale() {
		return ((T (*)(PVPDroppedPickUpGuide*))(Il2CppBase() + 0x3DA0264))(this);
	}
	template <typename T = void> T UpdateVisible() {
		return ((T (*)(PVPDroppedPickUpGuide*))(Il2CppBase() + 0x3D9FDEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(PVPDroppedPickUpGuide*))(Il2CppBase() + 0x3DA044C))(this);
	}

};

}
