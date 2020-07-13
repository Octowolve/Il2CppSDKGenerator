#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SignSystem {

class SignIndicatorsManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SignSystem", "SignIndicatorsManager"));
	}

	template <typename T = int32_t> static T& SignableAddColMaxCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> static T& MinBoxColliderSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppVector3> static T& MaxBoxColliderSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& PickupItemSignableCfg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& DeathBoxSignableCfg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& PickupBoxSignableCfg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& PickupItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& DeathBoxList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& StaticNearbySignableInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& ReviveDropList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& StaticSignableTransList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& SignIndicatorsMap() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& SignIndicatorsCacheMap() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& NewSignIndicatorsMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& IndicatorsPool() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& InValidSignIndicators() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAddSignIndicators() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedCheckAddSignIndicators() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAddSignalbeIndicators() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpitToPickupItemAndDeathBoxList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSignableIndicators() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateIndicatorInvalidInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedUpdateBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddBoxCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetValidBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSignableConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValidBoxColliderSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClampBoxColliderSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReviveDropList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CleatStaticReviveDropList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReFillStaticSignableInfoSimpleList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReFillStaticSignableInfoSimpleListBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearStaticSignableInfoSimpleList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNearbySignableList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetNearbySignableList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSignIndicator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSignIndicatorFromHitObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRemoveSignIndicators() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedCheckRemoveSignIndicators() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSignIndicator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedIncluePSWhenGetBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveSignIndicator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnSignIndicator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeSpawnSignIndicator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}

	template <typename T = void> T CheckAddSignIndicators() {
		return ((T (*)(SignIndicatorsManager*))(Il2CppBase() + 0x38E5244))(this);
	}
	template <typename T = bool> T NeedCheckAddSignIndicators() {
		return ((T (*)(SignIndicatorsManager*))(Il2CppBase() + 0x38E5328))(this);
	}
	template <typename T = void> T CheckAddSignalbeIndicators() {
		return ((T (*)(SignIndicatorsManager*))(Il2CppBase() + 0x38E5494))(this);
	}
	template <typename T = void> T SpitToPickupItemAndDeathBoxList(uintptr_t brGame, Il2CppList<uintptr_t>* PickupItemList, Il2CppList<uintptr_t>* DeathBoxList) {
		return ((T (*)(SignIndicatorsManager*, uintptr_t, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x38E5B0C))(this, brGame, PickupItemList, DeathBoxList);
	}
	template <typename T = void> T AddSignableIndicators(Il2CppList<uintptr_t>* NearbySignableList) {
		return ((T (*)(SignIndicatorsManager*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x38E67A4))(this, NearbySignableList);
	}
	template <typename T = void> T UpdateIndicatorInvalidInfo(uintptr_t Indicator, uintptr_t Trans, uintptr_t TargetType, uint32_t TargetID) {
		return ((T (*)(SignIndicatorsManager*, uintptr_t, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x38E732C))(this, Indicator, Trans, TargetType, TargetID);
	}
	template <typename T = bool> T NeedUpdateBounds(uintptr_t TargetType) {
		return ((T (*)(SignIndicatorsManager*, uintptr_t))(Il2CppBase() + 0x38E76F8))(this, TargetType);
	}
	template <typename T = bool> T AddBoxCollider(uintptr_t SrcObject, uintptr_t SrcBounds, uintptr_t DestObject, Il2CppVector3 ColSizeScale) {
		return ((T (*)(SignIndicatorsManager*, uintptr_t, uintptr_t, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x38E7CF0))(this, SrcObject, SrcBounds, DestObject, ColSizeScale);
	}
	template <typename T = bool> T GetValidBounds(uintptr_t SrcObject, uintptr_t* SrcBounds, uintptr_t TargetType, bool IncludeParticleSystme) {
		return ((T (*)(SignIndicatorsManager*, uintptr_t, uintptr_t*, uintptr_t, bool))(Il2CppBase() + 0x38E77D8))(this, SrcObject, SrcBounds, TargetType, IncludeParticleSystme);
	}
	template <typename T = void*> T GetBounds(uintptr_t Object, uintptr_t TargetType, bool CheckVisible, bool IncludeParticleSystem) {
		return ((T (*)(SignIndicatorsManager*, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x38E8130))(this, Object, TargetType, CheckVisible, IncludeParticleSystem);
	}
	template <typename T = uintptr_t> T GetSignableConfig(uintptr_t TargetType) {
		return ((T (*)(SignIndicatorsManager*, uintptr_t))(Il2CppBase() + 0x38E7B10))(this, TargetType);
	}
	template <typename T = bool> T IsValidBoxColliderSize(Il2CppVector3 Size) {
		return ((T (*)(SignIndicatorsManager*, Il2CppVector3))(Il2CppBase() + 0x38E8460))(this, Size);
	}
	template <typename T = Il2CppVector3> T ClampBoxColliderSize(Il2CppVector3 Size) {
		return ((T (*)(SignIndicatorsManager*, Il2CppVector3))(Il2CppBase() + 0x38E864C))(this, Size);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetReviveDropList() {
		return ((T (*)(SignIndicatorsManager*))(Il2CppBase() + 0x38E6144))(this);
	}
	template <typename T = void> T CleatStaticReviveDropList() {
		return ((T (*)(SignIndicatorsManager*))(Il2CppBase() + 0x38E6668))(this);
	}
	template <typename T = void> T ReFillStaticSignableInfoSimpleList(Il2CppList<uintptr_t>* SignableList, uintptr_t IndicatorType) {
		return ((T (*)(SignIndicatorsManager*, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x1E8A960))(this, SignableList, IndicatorType);
	}
	template <typename T = void> T ReFillStaticSignableInfoSimpleListBox(uintptr_t brGame, uintptr_t IndicatorType) {
		return ((T (*)(SignIndicatorsManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x38E5F3C))(this, brGame, IndicatorType);
	}
	template <typename T = void> T ClearStaticSignableInfoSimpleList() {
		return ((T (*)(SignIndicatorsManager*))(Il2CppBase() + 0x38E5E00))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetNearbySignableList(Il2CppVector3 Center, uintptr_t TargetType, Il2CppList<uintptr_t>* SignableInfoList, Il2CppList<uintptr_t>* NearbySignableList) {
		return ((T (*)(SignIndicatorsManager*, Il2CppVector3, uintptr_t, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x38E5CB8))(this, Center, TargetType, SignableInfoList, NearbySignableList);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetNearbySignableList_1(Il2CppVector3 Center, float Radius, Il2CppList<uintptr_t>* SignableInfoList, Il2CppList<uintptr_t>* NearbySignableList) {
		return ((T (*)(SignIndicatorsManager*, Il2CppVector3, float, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x38E905C))(this, Center, Radius, SignableInfoList, NearbySignableList);
	}
	template <typename T = uintptr_t> T GetSignIndicator(uintptr_t TargetObject) {
		return ((T (*)(SignIndicatorsManager*, uintptr_t))(Il2CppBase() + 0x38E9564))(this, TargetObject);
	}
	template <typename T = uintptr_t> T GetSignIndicatorFromHitObject(uintptr_t hitObj) {
		return ((T (*)(SignIndicatorsManager*, uintptr_t))(Il2CppBase() + 0x38E9698))(this, hitObj);
	}
	template <typename T = void> T CheckRemoveSignIndicators() {
		return ((T (*)(SignIndicatorsManager*))(Il2CppBase() + 0x38E97CC))(this);
	}
	template <typename T = bool> T NeedCheckRemoveSignIndicators() {
		return ((T (*)(SignIndicatorsManager*))(Il2CppBase() + 0x38EA374))(this);
	}
	template <typename T = bool> T AddSignIndicator(uintptr_t Trans, uintptr_t TargetType, uint32_t TargetID) {
		return ((T (*)(SignIndicatorsManager*, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x38E6ED8))(this, Trans, TargetType, TargetID);
	}
	template <typename T = bool> T NeedIncluePSWhenGetBounds(uintptr_t TargetType) {
		return ((T (*)(SignIndicatorsManager*, uintptr_t))(Il2CppBase() + 0x38EAC70))(this, TargetType);
	}
	template <typename T = void> T RemoveSignIndicator(uintptr_t Trans) {
		return ((T (*)(SignIndicatorsManager*, uintptr_t))(Il2CppBase() + 0x38EAD50))(this, Trans);
	}
	template <typename T = uintptr_t> T SpawnSignIndicator(uintptr_t TargetType, uintptr_t TargetObject, uint32_t TargetID, Il2CppVector3 Location, Il2CppQuaternion Rotation, uintptr_t Parent) {
		return ((T (*)(SignIndicatorsManager*, uintptr_t, uintptr_t, uint32_t, Il2CppVector3, Il2CppQuaternion, uintptr_t))(Il2CppBase() + 0x38EA870))(this, TargetType, TargetObject, TargetID, Location, Rotation, Parent);
	}
	template <typename T = void> T DeSpawnSignIndicator(uintptr_t SignIndicatorObject) {
		return ((T (*)(SignIndicatorsManager*, uintptr_t))(Il2CppBase() + 0x38EA6C8))(this, SignIndicatorObject);
	}
	template <typename T = int32_t> static T CheckAddSignalbeIndicatorsm__0(uintptr_t InfoA, uintptr_t InfoB) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x38EB4B8))(0, InfoA, InfoB);
	}

};

}
