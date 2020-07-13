#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class FunctionalArea
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "FunctionalArea"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& LastUpdateShowFrame() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& LastUpdateInfoFrame() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_IsAbandoned() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPointInSide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCircleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T get_IsAbandoned() {
		return ((T (*)(FunctionalArea*))(Il2CppBase() + 0x3D4ED60))(this);
	}
	template <typename T = void> T set_IsAbandoned(bool value) {
		return ((T (*)(FunctionalArea*, bool))(Il2CppBase() + 0x3D4ED68))(this, value);
	}
	template <typename T = bool> T get_PropertyChanged() {
		return ((T (*)(FunctionalArea*))(Il2CppBase() + 0x3D4ED70))(this);
	}
	template <typename T = float> T get_CurrentRadius() {
		return ((T (*)(FunctionalArea*))(Il2CppBase() + 0x3D4ED88))(this);
	}
	template <typename T = Il2CppVector3> T get_Position() {
		return ((T (*)(FunctionalArea*))(Il2CppBase() + 0x3D4ED90))(this);
	}
	template <typename T = bool> T IsPointInSide(Il2CppVector3 pt) {
		return ((T (*)(FunctionalArea*, Il2CppVector3))(Il2CppBase() + 0x3D4EDA8))(this, pt);
	}
	template <typename T = void> T UpdateCircleInfo(Il2CppVector3 pos) {
		return ((T (*)(FunctionalArea*, Il2CppVector3))(Il2CppBase() + 0x3D4EF04))(this, pos);
	}

};

}
