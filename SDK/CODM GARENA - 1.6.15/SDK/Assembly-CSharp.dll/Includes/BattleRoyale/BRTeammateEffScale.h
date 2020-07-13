#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRTeammateEffScale
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRTeammateEffScale"));
	}

	template <typename T = float> T& minDis() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& maxDis() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& baseOffset() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& baseCenterOffset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_Pawn() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_MaxScale() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& lastOffset() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_CachedTransform() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& lastScale() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CountReviveScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetParentOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_CachedTransform() {
		return ((T (*)(BRTeammateEffScale*))(Il2CppBase() + 0x2630B78))(this);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(BRTeammateEffScale*, uintptr_t))(Il2CppBase() + 0x2630C48))(this, pawn);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(BRTeammateEffScale*))(Il2CppBase() + 0x2631078))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BRTeammateEffScale*))(Il2CppBase() + 0x2631158))(this);
	}
	template <typename T = float> T CountReviveScale() {
		return ((T (*)(BRTeammateEffScale*))(Il2CppBase() + 0x2631450))(this);
	}
	template <typename T = void> T SetScale(float scale) {
		return ((T (*)(BRTeammateEffScale*, float))(Il2CppBase() + 0x26315B0))(this, scale);
	}
	template <typename T = void> T SetParentOffset() {
		return ((T (*)(BRTeammateEffScale*))(Il2CppBase() + 0x2630D58))(this);
	}

};

}
