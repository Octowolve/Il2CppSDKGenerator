#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UVTextureAnimator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UVTextureAnimator"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& AnimatedMaterialsNotInstance() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Rows() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Columns() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& Fps() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& OffsetMat() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector2> T& SelfTiling() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& IsLoop() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& IsReverse() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = bool> T& IsRandomOffsetForInctance() {
		return *(T*)((uintptr_t)this + 0x2A);
	}
	template <typename T = bool> T& IsBump() {
		return *(T*)((uintptr_t)this + 0x2B);
	}
	template <typename T = bool> T& IsHeight() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& isInizialised() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& allCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& deltaFps() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& isVisible() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& isCorutineStarted() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = uintptr_t> T& currentRenderer() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& instanceMaterial() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInstanceMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitDefaultVariables() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBecameVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBecameInvisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCorutine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCorutineFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UVTextureAnimator*))(Il2CppBase() + 0x4884ED4))(this);
	}
	template <typename T = void> T SetInstanceMaterial(uintptr_t mat, Il2CppVector2 offsetMat) {
		return ((T (*)(UVTextureAnimator*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x48854F4))(this, mat, offsetMat);
	}
	template <typename T = void> T InitDefaultVariables() {
		return ((T (*)(UVTextureAnimator*))(Il2CppBase() + 0x4884F80))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UVTextureAnimator*))(Il2CppBase() + 0x48855C4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UVTextureAnimator*))(Il2CppBase() + 0x488577C))(this);
	}
	template <typename T = void> T OnBecameVisible() {
		return ((T (*)(UVTextureAnimator*))(Il2CppBase() + 0x488582C))(this);
	}
	template <typename T = void> T OnBecameInvisible() {
		return ((T (*)(UVTextureAnimator*))(Il2CppBase() + 0x48858F4))(this);
	}
	template <typename T = uintptr_t> T UpdateCorutine() {
		return ((T (*)(UVTextureAnimator*))(Il2CppBase() + 0x488569C))(this);
	}
	template <typename T = void> T UpdateCorutineFrame() {
		return ((T (*)(UVTextureAnimator*))(Il2CppBase() + 0x48859A0))(this);
	}

};

}
