#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SignSystem {

class SignsParser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SignSystem", "SignsParser"));
	}

	template <typename T = uintptr_t> T& DefaultMarkTacticsType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& DefaultMarkTacticsTypeMP() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& SignsParserInst() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTargetMarkTypeAdjust() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTargetMarkType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpecialTargetMarkTypeForBR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogIndicatorInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValidTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetComponentInIndicator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetComponentInParents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(SignsParser*, uintptr_t, bool))(Il2CppBase() + 0x3902098))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(SignsParser*))(Il2CppBase() + 0x39021A4))(this);
	}
	template <typename T = uintptr_t> static T get_Inst() {
		return ((T (*)(void *))(Il2CppBase() + 0x38F37BC))(0);
	}
	template <typename T = uintptr_t> T GetTargetMarkTypeAdjust(uintptr_t TargetImpactInfo, uintptr_t* MarkSubType, uintptr_t* ObjectType, uintptr_t* TargetID, uintptr_t* ItemID, uintptr_t* SubObjectType, uintptr_t* HitTarget, uintptr_t* MarkFailReason, bool autoGet) {
		return ((T (*)(SignsParser*, uintptr_t, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, bool))(Il2CppBase() + 0x38F3918))(this, TargetImpactInfo, MarkSubType, ObjectType, TargetID, ItemID, SubObjectType, HitTarget, MarkFailReason, autoGet);
	}
	template <typename T = uintptr_t> T GetTargetMarkType(uintptr_t TargetImpactInfo, uintptr_t* MarkSubType, uintptr_t* TargetID, uintptr_t* ItemID, uintptr_t* SubObjectType, uintptr_t* HitTarget, uintptr_t* MarkFailReason, bool autoGet) {
		return ((T (*)(SignsParser*, uintptr_t, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, bool))(Il2CppBase() + 0x3902260))(this, TargetImpactInfo, MarkSubType, TargetID, ItemID, SubObjectType, HitTarget, MarkFailReason, autoGet);
	}
	template <typename T = uintptr_t> T GetSpecialTargetMarkTypeForBR(uintptr_t TargetImpactInfo, uintptr_t* MarkSubType, uintptr_t* TargetID, uintptr_t* ItemID, uintptr_t* SubObjectType, uintptr_t* HitTarget, uintptr_t* MarkFailReason, bool autoGet) {
		return ((T (*)(SignsParser*, uintptr_t, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, bool))(Il2CppBase() + 0x3902658))(this, TargetImpactInfo, MarkSubType, TargetID, ItemID, SubObjectType, HitTarget, MarkFailReason, autoGet);
	}
	template <typename T = void> T LogIndicatorInfo(uintptr_t Indicator, uintptr_t DetailGO, bool autoGet) {
		return ((T (*)(SignsParser*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3903248))(this, Indicator, DetailGO, autoGet);
	}
	template <typename T = bool> T IsValidTarget(uintptr_t Target) {
		return ((T (*)(SignsParser*, uintptr_t))(Il2CppBase() + 0x3903028))(this, Target);
	}
	template <typename T = uintptr_t> T GetComponentInIndicator(uintptr_t Indicator) {
		return ((T (*)(SignsParser*, uintptr_t))(Il2CppBase() + 0x335F730))(this, Indicator);
	}
	template <typename T = uintptr_t> T GetComponentInParents(uintptr_t StartTran, int32_t MaxLevel) {
		return ((T (*)(SignsParser*, uintptr_t, int32_t))(Il2CppBase() + 0x335F98C))(this, StartTran, MaxLevel);
	}

};

}
