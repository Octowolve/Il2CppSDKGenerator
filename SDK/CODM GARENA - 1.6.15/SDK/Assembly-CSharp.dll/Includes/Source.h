#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Source
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Source"));
	}

	template <typename T = uintptr_t> T& pawn() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& BRenderers() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mIsVisible() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mlodStatus() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& mLodGroup() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mGPUSkinModel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& mFroceReset() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__findRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetCommandBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Init(uintptr_t inPawn) {
		return ((T (*)(Source*, uintptr_t))(Il2CppBase() + 0x464A338))(this, inPawn);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(Source*))(Il2CppBase() + 0x464AC8C))(this);
	}
	template <typename T = void> T OnSwitchWeapon() {
		return ((T (*)(Source*))(Il2CppBase() + 0x464B60C))(this);
	}
	template <typename T = void> T ResetMesh() {
		return ((T (*)(Source*))(Il2CppBase() + 0x464A424))(this);
	}
	template <typename T = bool> T _findRenderer(uintptr_t inGroup, uintptr_t inVal) {
		return ((T (*)(Source*, uintptr_t, uintptr_t))(Il2CppBase() + 0x45EF744))(this, inGroup, inVal);
	}
	template <typename T = bool> T Update() {
		return ((T (*)(Source*))(Il2CppBase() + 0x464BC38))(this);
	}
	template <typename T = void> T ResetCommandBuffer(uintptr_t inCB, uintptr_t inMat) {
		return ((T (*)(Source*, uintptr_t, uintptr_t))(Il2CppBase() + 0x464C040))(this, inCB, inMat);
	}

};

}
