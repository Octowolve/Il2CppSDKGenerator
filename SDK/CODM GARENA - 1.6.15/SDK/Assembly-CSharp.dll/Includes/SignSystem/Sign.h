#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SignSystem {

class Sign
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SignSystem", "Sign"));
	}

	template <typename T = uintptr_t> T& OutlineEffectColor() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& UIAnchor() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& OwnerID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& SignID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& MarkType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& MarkSubType() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& ObjectType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& TargetID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& DistToLocalPlayer() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& IsInViewFrustum() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& ViewPortPos() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& EnableDelayTryAddOutlineEffect() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& IsShowingOutLineEffect() {
		return *(T*)((uintptr_t)this + 0x51);
	}
	template <typename T = int32_t> T& AreaIndexInScreen() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uint32_t> T& MarkTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint32_t> T& SubObjectType() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& outlineEffect() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeSpawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowOutlineEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideOutlineEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShowOutlineEffectObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPawnRender() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRendersWithoutPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddOcclusionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uint32_t> T get_OwnerID() {
		return ((T (*)(Sign*))(Il2CppBase() + 0x38E25F8))(this);
	}
	template <typename T = void> T set_OwnerID(uint32_t value) {
		return ((T (*)(Sign*, uint32_t))(Il2CppBase() + 0x38E2600))(this, value);
	}
	template <typename T = uint32_t> T get_SignID() {
		return ((T (*)(Sign*))(Il2CppBase() + 0x38E2608))(this);
	}
	template <typename T = void> T set_SignID(uint32_t value) {
		return ((T (*)(Sign*, uint32_t))(Il2CppBase() + 0x38E2610))(this, value);
	}
	template <typename T = uintptr_t> T get_MarkType() {
		return ((T (*)(Sign*))(Il2CppBase() + 0x38E2618))(this);
	}
	template <typename T = void> T set_MarkType(uintptr_t value) {
		return ((T (*)(Sign*, uintptr_t))(Il2CppBase() + 0x38E2620))(this, value);
	}
	template <typename T = uint32_t> T get_MarkSubType() {
		return ((T (*)(Sign*))(Il2CppBase() + 0x38E2628))(this);
	}
	template <typename T = void> T set_MarkSubType(uint32_t value) {
		return ((T (*)(Sign*, uint32_t))(Il2CppBase() + 0x38E2630))(this, value);
	}
	template <typename T = uint32_t> T get_ObjectType() {
		return ((T (*)(Sign*))(Il2CppBase() + 0x38E2638))(this);
	}
	template <typename T = void> T set_ObjectType(uint32_t value) {
		return ((T (*)(Sign*, uint32_t))(Il2CppBase() + 0x38E2640))(this, value);
	}
	template <typename T = uint32_t> T get_TargetID() {
		return ((T (*)(Sign*))(Il2CppBase() + 0x38E2648))(this);
	}
	template <typename T = void> T set_TargetID(uint32_t value) {
		return ((T (*)(Sign*, uint32_t))(Il2CppBase() + 0x38E2650))(this, value);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(Sign*))(Il2CppBase() + 0x38E2658))(this);
	}
	template <typename T = void> T set_ItemID(int32_t value) {
		return ((T (*)(Sign*, int32_t))(Il2CppBase() + 0x38E2660))(this, value);
	}
	template <typename T = float> T get_DistToLocalPlayer() {
		return ((T (*)(Sign*))(Il2CppBase() + 0x38E2668))(this);
	}
	template <typename T = void> T set_DistToLocalPlayer(float value) {
		return ((T (*)(Sign*, float))(Il2CppBase() + 0x38E2670))(this, value);
	}
	template <typename T = bool> T get_IsInViewFrustum() {
		return ((T (*)(Sign*))(Il2CppBase() + 0x38E2678))(this);
	}
	template <typename T = void> T set_IsInViewFrustum(bool value) {
		return ((T (*)(Sign*, bool))(Il2CppBase() + 0x38E2680))(this, value);
	}
	template <typename T = Il2CppVector3> T get_ViewPortPos() {
		return ((T (*)(Sign*))(Il2CppBase() + 0x38E2688))(this);
	}
	template <typename T = void> T set_ViewPortPos(Il2CppVector3 value) {
		return ((T (*)(Sign*, Il2CppVector3))(Il2CppBase() + 0x38E269C))(this, value);
	}
	template <typename T = bool> T get_EnableDelayTryAddOutlineEffect() {
		return ((T (*)(Sign*))(Il2CppBase() + 0x38E26A8))(this);
	}
	template <typename T = void> T set_EnableDelayTryAddOutlineEffect(bool value) {
		return ((T (*)(Sign*, bool))(Il2CppBase() + 0x38E26B0))(this, value);
	}
	template <typename T = Il2CppVector3> T get_Position() {
		return ((T (*)(Sign*))(Il2CppBase() + 0x38E26B8))(this);
	}
	template <typename T = void> T set_Position(Il2CppVector3 value) {
		return ((T (*)(Sign*, Il2CppVector3))(Il2CppBase() + 0x38E26F8))(this, value);
	}
	template <typename T = Il2CppVector3> T get_UIAnchorPosition() {
		return ((T (*)(Sign*))(Il2CppBase() + 0x38E274C))(this);
	}
	template <typename T = bool> T get_IsShowingOutLineEffect() {
		return ((T (*)(Sign*))(Il2CppBase() + 0x38E287C))(this);
	}
	template <typename T = void> T set_IsShowingOutLineEffect(bool value) {
		return ((T (*)(Sign*, bool))(Il2CppBase() + 0x38E2884))(this, value);
	}
	template <typename T = int32_t> T get_AreaIndexInScreen() {
		return ((T (*)(Sign*))(Il2CppBase() + 0x38E288C))(this);
	}
	template <typename T = void> T set_AreaIndexInScreen(int32_t value) {
		return ((T (*)(Sign*, int32_t))(Il2CppBase() + 0x38E2894))(this, value);
	}
	template <typename T = uint32_t> T get_MarkTime() {
		return ((T (*)(Sign*))(Il2CppBase() + 0x38E289C))(this);
	}
	template <typename T = void> T set_MarkTime(uint32_t value) {
		return ((T (*)(Sign*, uint32_t))(Il2CppBase() + 0x38E28A4))(this, value);
	}
	template <typename T = uint32_t> T get_SubObjectType() {
		return ((T (*)(Sign*))(Il2CppBase() + 0x38E28AC))(this);
	}
	template <typename T = void> T set_SubObjectType(uint32_t value) {
		return ((T (*)(Sign*, uint32_t))(Il2CppBase() + 0x38E28B4))(this, value);
	}
	template <typename T = void> T Init() {
		return ((T (*)(Sign*))(Il2CppBase() + 0x38E28BC))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(Sign*, float))(Il2CppBase() + 0x38E2AAC))(this, DeltaTime);
	}
	template <typename T = void> T OnDeSpawn() {
		return ((T (*)(Sign*))(Il2CppBase() + 0x38E2CB0))(this);
	}
	template <typename T = void> T ShowOutlineEffect() {
		return ((T (*)(Sign*))(Il2CppBase() + 0x38E2B64))(this);
	}
	template <typename T = void> T HideOutlineEffect() {
		return ((T (*)(Sign*))(Il2CppBase() + 0x38E2EC0))(this);
	}
	template <typename T = uintptr_t> T GetShowOutlineEffectObject() {
		return ((T (*)(Sign*))(Il2CppBase() + 0x38E2FD0))(this);
	}
	template <typename T = bool> T IsPawnRender(uintptr_t render, uintptr_t TargetObject, void* checkedSet) {
		return ((T (*)(Sign*, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x38E37B8))(this, render, TargetObject, checkedSet);
	}
	template <typename T = void> T GetRendersWithoutPawn(Il2CppList<uintptr_t>* renderers, uintptr_t TargetObject) {
		return ((T (*)(Sign*, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x38E3A98))(this, renderers, TargetObject);
	}
	template <typename T = bool> T AddOcclusionEffect(uintptr_t TargetObject, uintptr_t color, float intensity, float range) {
		return ((T (*)(Sign*, uintptr_t, uintptr_t, float, float))(Il2CppBase() + 0x38E3448))(this, TargetObject, color, intensity, range);
	}

};

}
